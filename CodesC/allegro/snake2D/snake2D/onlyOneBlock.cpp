/*
#include <allegro5\allegro.h>
#include <allegro5\allegro_primitives.h>				//Our primitive header file
#include <allegro5\allegro_font.h>
#include <allegro5\allegro_ttf.h>
#include "structure.h"

const int WIDTH = 800;
const int HEIGHT = 600;
const int SNAKE_VELOCITY = 3.5;
const int BLOCK_RADIUS = 10;

enum KEYS{ UP, DOWN, LEFT, RIGHT};


//initSnakeBlocks(SnakeBlock blocks[]);
void changeFirstBlockDirection(SnakeBlock &block, SnakeBlock previousState, int flag);
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
	SnakeBlock block;
	SnakeBlock previousState;

	block.live = true;
	block.x = WIDTH/2;
	block.y = HEIGHT/2;
	block.xVelocity = SNAKE_VELOCITY;
	block.yVelocity = 0;


	////////////////////////////////////////////////////////////////////////
	al_start_timer(timer);
	float gameTime = al_current_time();
	
	while(gameLoop == true)
	{
		al_wait_for_event(event_queue, &ev);

		if(ev.type == ALLEGRO_EVENT_KEY_DOWN)
		{
			if(ev.keyboard.keycode == ALLEGRO_KEY_UP)
			{
				previousState = block;
				changeFirstBlockDirection(block, previousState, UP);
			}
			else if(ev.keyboard.keycode == ALLEGRO_KEY_DOWN)
			{
				previousState = block;
				changeFirstBlockDirection(block, previousState, DOWN);
			}
			else if(ev.keyboard.keycode == ALLEGRO_KEY_LEFT)
			{
				previousState = block;
				changeFirstBlockDirection(block, previousState, LEFT);	
			}
			else if(ev.keyboard.keycode == ALLEGRO_KEY_RIGHT)
			{
				previousState = block;
				changeFirstBlockDirection(block, previousState, RIGHT);
			}
			else if(ev.keyboard.keycode == ALLEGRO_KEY_ESCAPE)
			{
				gameLoop = false ;
			}
		}
		else if(ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
		{
			gameLoop = false;
		}
		if(ev.type == ALLEGRO_EVENT_TIMER)
		{
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

			block.x = block.x + block.xVelocity;
			block.y = block.y + block.yVelocity;
		}

		if(redraw && al_is_event_queue_empty(event_queue))
		{
			redraw = false;

			al_draw_textf(font18, al_map_rgb(255,0,255), WIDTH-10, 10, ALLEGRO_ALIGN_RIGHT, "FPS: %i", gameFPS);
			al_draw_textf(font18, al_map_rgb(255,0,255), WIDTH-10, 30, ALLEGRO_ALIGN_RIGHT, "X: %i", block.x);
			al_draw_textf(font18, al_map_rgb(255,0,255), WIDTH-10, 50, ALLEGRO_ALIGN_RIGHT, "Y: %i", block.y);


			al_draw_filled_circle(block.x, block.y, BLOCK_RADIUS, al_map_rgba(255, 255, 255, 100));
			al_flip_display();
			al_clear_to_color(al_map_rgb(0,0,0));
		}
	}

	al_destroy_font(font18);
	al_destroy_event_queue(event_queue);
	al_destroy_timer(timer);
	al_destroy_display(display);						//destroy our display object

	return 0;
}

//
void changeFirstBlockDirection(SnakeBlock &block,SnakeBlock previousState, int flag)
{
	if(previousState.yVelocity == 0)
	{
		if(flag == UP)
		{
			block.xVelocity = 0 ;
			block.yVelocity = -SNAKE_VELOCITY;
		}
		else if(flag == DOWN)
		{
			block.xVelocity = 0;
			block.yVelocity = +SNAKE_VELOCITY;
		}
	}
	else if(previousState.xVelocity == 0)
	{
		if(flag == LEFT)
		{
			block.xVelocity = -SNAKE_VELOCITY;
			block.yVelocity = 0;
		}
		else if(flag == RIGHT)
		{
			block.xVelocity = SNAKE_VELOCITY;
			block.yVelocity = 0;
		}
	}
}
*/