/*
#include <allegro5\allegro.h>
#include <allegro5\allegro_primitives.h>				//Our primitive header file
#include <allegro5\allegro_font.h>
#include <allegro5\allegro_ttf.h>
#include "structure.h"

const int WIDTH = 800;
const int HEIGHT = 600;
const int SNAKE_VELOCITY = 3;
const int BLOCK_RADIUS = 10;
const int MAX_BLOCK_NO = 10;
int NO_OF_ALIVE_BLOCK = 0;  // 0 meaning only the first block(block[0] is alive)

enum KEYS{ UP, DOWN, LEFT, RIGHT};


void intiSnakeBlocks(SnakeBlock block[]);
void changeFirstBlockDirection(SnakeBlock &block, SnakeBlock &temporaryPreviousState, SnakeBlock &finalPreviousState, int flag);
void updateBlockDirection(SnakeBlock block[]);
void updateEveryBlockCoordinate(SnakeBlock block[]);
void increaseBlockNumber(SnakeBlock block[]);
void decreaseBlockNumber(SnakeBlock block[]);
int main(void)
{
	bool gameLoop = true;
	bool redraw = true;

	int pos_x = WIDTH / 2;
	int pos_y = HEIGHT / 2;

	int FPS = 60;
	int frames = 0;
	int gameFPS = 0;

//	bool keys[4] = {false, false, false, false};

	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_EVENT_QUEUE *event_queue = NULL;
	ALLEGRO_TIMER *timer = NULL;
	ALLEGRO_FONT *font18 = NULL;
	

	if(!al_init())										//initialize Allegro
		return -1;

	display = al_create_display(WIDTH, HEIGHT);			//create our display object

	if(!display)										//test display object
		return -1;

	al_init_primitives_addon();
	al_install_keyboard();
	al_init_font_addon();
	al_init_ttf_addon();

	event_queue = al_create_event_queue();
	ALLEGRO_EVENT ev;
	timer = al_create_timer(1.0 / FPS);
	font18 = al_load_font("arial.ttf", 18, 0);


	al_register_event_source(event_queue, al_get_keyboard_event_source());
	al_register_event_source(event_queue, al_get_display_event_source(display));
	al_register_event_source(event_queue, al_get_timer_event_source(timer));

	// snake rellated variables
	SnakeBlock block[MAX_BLOCK_NO];
	SnakeBlock temporaryPreviousState, finalPreviousState;

	intiSnakeBlocks(block);



	////////////////////////////////////////////////////////////////////////
	al_start_timer(timer);
	float gameTime = al_current_time();

	
	al_clear_to_color(al_map_rgb(255,0,0));
	al_flip_display();
	
	while(gameLoop == true)
	{
		al_wait_for_event(event_queue, &ev);

		if(ev.type == ALLEGRO_EVENT_KEY_DOWN)
		{
			temporaryPreviousState = block[0];

			if(ev.keyboard.keycode == ALLEGRO_KEY_UP)
			{
				changeFirstBlockDirection(block[0], temporaryPreviousState,finalPreviousState, UP);
			}
			else if(ev.keyboard.keycode == ALLEGRO_KEY_DOWN)
			{
				changeFirstBlockDirection(block[0], temporaryPreviousState,finalPreviousState, DOWN);
			}
			else if(ev.keyboard.keycode == ALLEGRO_KEY_LEFT)
			{
				changeFirstBlockDirection(block[0], temporaryPreviousState,finalPreviousState, LEFT);	
			}
			else if(ev.keyboard.keycode == ALLEGRO_KEY_RIGHT)
			{
				changeFirstBlockDirection(block[0], temporaryPreviousState,finalPreviousState, RIGHT);
			}
			else if(ev.keyboard.keycode == ALLEGRO_KEY_ESCAPE)
			{
				gameLoop = false ;
			}
			else if(ev.keyboard.keycode == ALLEGRO_KEY_EQUALS)
			{
				increaseBlockNumber(block);
			}
			else if(ev.keyboard.keycode == ALLEGRO_KEY_MINUS)
			{
				decreaseBlockNumber(block);
			}
		}
		else if(ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
		{
			gameLoop = false;
		}
		if(ev.type == ALLEGRO_EVENT_TIMER)
		{
			// update part 1
			// start: calculation FPS
			redraw = true;
			frames++;

			if(al_current_time() - gameTime >=  1)
			{
				gameTime = al_current_time();
				gameFPS = frames;
				frames = 0;
			}
			// end: calculation FPS

			// update part 2
			if(finalPreviousState.x == block[1].x && finalPreviousState.y == block[1].y)
			{
				updateBlockDirection(block);	
			}
			//update part 3
			updateEveryBlockCoordinate(block);		
		}

		if(redraw && al_is_event_queue_empty(event_queue))
		{
			redraw = false;

			al_draw_textf(font18, al_map_rgb(255,0,255), WIDTH-10, 10, ALLEGRO_ALIGN_RIGHT, "FPS: %i", gameFPS);
			al_draw_textf(font18, al_map_rgb(255,0,255), WIDTH-10, 30, ALLEGRO_ALIGN_RIGHT, "X: %i", block[0].x);
			al_draw_textf(font18, al_map_rgb(255,0,255), WIDTH-10, 50, ALLEGRO_ALIGN_RIGHT, "Y: %i", block[0].y);

			al_draw_textf(font18, al_map_rgb(255,0,255), WIDTH-10, 30, ALLEGRO_ALIGN_RIGHT, "fps_x: %i", finalPreviousState.x);
			al_draw_textf(font18, al_map_rgb(255,0,255), WIDTH-10, 50, ALLEGRO_ALIGN_RIGHT, "fps_y: %i", finalPreviousState.y);

			for(int i=0; i<= NO_OF_ALIVE_BLOCK; i++)
			{
				al_draw_filled_circle(block[i].x, block[i].y, BLOCK_RADIUS, al_map_rgba(255, 255, 255, 90));	
			}
			al_flip_display();
			al_clear_to_color(al_map_rgb(255,0,0));
		}
	}

	al_destroy_font(font18);
	al_destroy_event_queue(event_queue);
	al_destroy_timer(timer);
	al_destroy_display(display);						//destroy our display object

	return 0;
}



void intiSnakeBlocks(SnakeBlock block[])
{
	for(int i=0; i<MAX_BLOCK_NO; i++)
	{
		if(i=0)
		{
			block[i].live = true;
			block[i].x = WIDTH/2;
			block[i].y = HEIGHT/2;
			block[i].xVelocity = SNAKE_VELOCITY;
			block[i].yVelocity = 0;
		}
		else
		{
			block[i].live = false;
			block[i].x = 0;
			block[i].y = 0;
			block[i].xVelocity = 0;
			block[i].yVelocity = 0;
		}
	}
}
void changeFirstBlockDirection(SnakeBlock &block, SnakeBlock &temporaryPreviousState, SnakeBlock &finalPreviousState, int flag)
{
	if(temporaryPreviousState.yVelocity == 0)
	{
		if(flag == UP)
		{
			block.xVelocity = 0 ;
			block.yVelocity = -SNAKE_VELOCITY;

			finalPreviousState = block;
		}
		else if(flag == DOWN)
		{
			block.xVelocity = 0;
			block.yVelocity = +SNAKE_VELOCITY;

			finalPreviousState = block;
		}
	}
	else if(temporaryPreviousState.xVelocity == 0)
	{
		if(flag == LEFT)
		{
			block.xVelocity = -SNAKE_VELOCITY;
			block.yVelocity = 0;

			finalPreviousState = block;
		}
		else if(flag == RIGHT)
		{
			block.xVelocity = SNAKE_VELOCITY;
			block.yVelocity = 0;

			finalPreviousState = block;
		}
	}
}
void updateBlockDirection(SnakeBlock block[])
{
	for(int i=NO_OF_ALIVE_BLOCK; i>=1; i--)
	{
		block[i].xVelocity = block[i-1].xVelocity;
		block[i].yVelocity = block[i-1].yVelocity;
	}
}
void updateEveryBlockCoordinate(SnakeBlock block[])
{
	for(int i=0; i <= NO_OF_ALIVE_BLOCK; i++)
	{
		if(block[i].live == true)		// no need of this line cz no_Of_alive_block 
										//tells us that
		{
			block[i].x = block[i].x + block[i].xVelocity;
			block[i].y = block[i].y + block[i].yVelocity;
		}
	}
}
void increaseBlockNumber(SnakeBlock block[])
{
	if(NO_OF_ALIVE_BLOCK <= 10)
	{
		NO_OF_ALIVE_BLOCK++;
		int i = NO_OF_ALIVE_BLOCK;

		block[i].live = true;
		block[i].x = block[i-1].x * (-2 * BLOCK_RADIUS * (block[i-1].xVelocity/SNAKE_VELOCITY ));
		block[i].y = block[i-1].y * (-2 * BLOCK_RADIUS * (block[i-1].yVelocity/SNAKE_VELOCITY ));
		block[i].xVelocity = block[i-1].xVelocity;
		block[i].yVelocity = block[i-1].yVelocity;
	}
}
void decreaseBlockNumber(SnakeBlock block[])
{
	if(NO_OF_ALIVE_BLOCK !=0)
	{
		int i = NO_OF_ALIVE_BLOCK;
		block[i].live = false;
		block[i].x = 0;
		block[i].y = 0;
		block[i].xVelocity = 0;
		block[i].yVelocity = 0;

		NO_OF_ALIVE_BLOCK--;
	}
}
*/