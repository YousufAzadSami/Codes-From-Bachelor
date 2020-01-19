#include <allegro5\allegro.h>
#include <allegro5\allegro_primitives.h>
#include <allegro5\allegro_font.h>
#include <allegro5\allegro_ttf.h>
#include "firstHeader.h"


const int WIDTH = 800;
const int HEIGHT = 400;
const int FPS = 60;
const int NUM_OF_BULLETS = 5;
const int NUM_OF_COMETS = 10;

bool keys[] = {false, false, false, false, false};

void InitShip(SpaceShip &ship);
void DrawShip(SpaceShip &ship);

void MoveShipUp(SpaceShip &ship);
void MoveShipDown(SpaceShip &ship);
void MoveShipLeft(SpaceShip &ship);
void MoveShipRight(SpaceShip &ship);

void initBullet(Bullet bullet[]);
void fireBullet(Bullet bullet[], SpaceShip &ship);
void MoveBullet(Bullet bullet[]);
void DrawBullet(Bullet bullet[]);
void collideBullet(Bullet bullet[], Comet comets[], SpaceShip &ship);

void initComets(Comet comets[]);
void fireComets(Comet comets[]);
void drawComets(Comet comets[]);
void updateComets(Comet comets[]);
void collideComets(Comet comets[], SpaceShip &ship);
int main()
{
	bool done = false;
	bool reDraw = false;
	bool isFinished = false;

	if(!al_init())
	{
		return -1;
	}
	ALLEGRO_DISPLAY *display = NULL;
	display = al_create_display( WIDTH ,HEIGHT );

	if(!display)
	{
		return -1;
	}
	struct SpaceShip ship;
	struct Bullet bullet[NUM_OF_BULLETS];
	struct Comet comets[NUM_OF_COMETS];
	ALLEGRO_EVENT_QUEUE *event_queue = NULL;
	ALLEGRO_TIMER *timer;
	ALLEGRO_FONT *arial_18;

	InitShip(ship);
	initBullet(bullet);
	initComets(comets);
	al_init_primitives_addon();
	al_install_keyboard();
	al_init_font_addon();
	al_init_ttf_addon();
	event_queue = al_create_event_queue();
	timer = al_create_timer(1.0/FPS);
	arial_18 = al_load_font("arial.ttf", 18, 0);

	al_register_event_source(event_queue, al_get_keyboard_event_source());
	al_register_event_source(event_queue, al_get_display_event_source(display));
	al_register_event_source(event_queue, al_get_timer_event_source(timer));

	al_start_timer(timer);
	while(!done)
	{
		ALLEGRO_EVENT ev;
		al_wait_for_event(event_queue, &ev);

		if(ev.type == ALLEGRO_EVENT_TIMER)
		{
			reDraw = true;

			if(keys[UP] == true)
				MoveShipUp(ship);
			if(keys[DOWN] == true)
				MoveShipDown(ship);
			if(keys[LEFT] == true)
				MoveShipLeft(ship);
			if(keys[RIGHT] == true)
				MoveShipRight(ship);
			//if(bullet.live == true)
			MoveBullet(bullet);
			fireComets(comets);
			updateComets(comets);
			collideBullet(bullet, comets, ship);
			collideComets(comets, ship);

			if(ship.lives <= 0)
				isFinished = true;
		}
		
		if(ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
		{
			done = !done;
		}
		if(ev.type == ALLEGRO_EVENT_KEY_DOWN)
		{
			switch(ev.keyboard.keycode)
			{
			case ALLEGRO_KEY_ESCAPE:
				done = !done;
				break;
			case ALLEGRO_KEY_UP:
				keys[UP] = true;
				break;
			case ALLEGRO_KEY_DOWN:
				keys[DOWN] = true;
				break;
			case ALLEGRO_KEY_LEFT:
				keys[LEFT] = true;
				break;
			case ALLEGRO_KEY_RIGHT:
				keys[RIGHT] = true;
				break;
			case ALLEGRO_KEY_SPACE:
				keys[SPACE] = true;
				
				//if(bullet.live == false)
				fireBullet(bullet, ship);
				break;
			}
		}
		else if(ev.type == ALLEGRO_EVENT_KEY_UP)
		{
			switch(ev.keyboard.keycode)
			{
			//case ALLEGRO_KEY_ESCAPE:
			//	done = !done;
			//	break;
			case ALLEGRO_KEY_UP:
				keys[UP] = false;
				break;
			case ALLEGRO_KEY_DOWN:
				keys[DOWN] = false;
				break;
			case ALLEGRO_KEY_LEFT:
				keys[LEFT] = false;
				break;
			case ALLEGRO_KEY_RIGHT:
				keys[RIGHT] = false;
				break;
			case ALLEGRO_KEY_SPACE:
				keys[SPACE] = false;
				break;
			}
		}

		if(reDraw == true && al_event_queue_is_empty(event_queue))
		{
			if(isFinished == false)
			{
				DrawShip(ship);
				DrawBullet(bullet);
				drawComets(comets);
				al_draw_textf(arial_18, al_map_rgb(255,255,0), 5, 5, 0, "Score: %3i    Lives Left: %i", ship.score, ship.lives);
			}else{
				al_draw_textf(arial_18, al_map_rgb(255,255,0), WIDTH/2, HEIGHT/2, ALLEGRO_ALIGN_CENTER, "GAME OVER__Score: %i", ship.score);
			}

			al_flip_display();
			al_clear_to_color(al_map_rgb(0, 0, 0));
			reDraw = false;
		}
	}

	al_destroy_display(display);
	al_destroy_event_queue(event_queue);
	al_destroy_font(arial_18);
	return 0;
}

void InitShip(SpaceShip &ship)
{
	ship.x = 20;
	ship.y = HEIGHT / 2;
	ship.ID = PLAYER;
	ship.lives = 3;
	ship.speed = 7;
	ship.boundx = 6;
	ship.boundy = 7;
	ship.score = 0;
}
void DrawShip(SpaceShip &ship)
{
	al_draw_filled_rectangle(ship.x, ship.y - 9, ship.x + 10, ship.y - 7, al_map_rgb(255, 0, 0));
	al_draw_filled_rectangle(ship.x, ship.y + 9, ship.x + 10, ship.y + 7, al_map_rgb(255, 0, 0));

	al_draw_filled_triangle(ship.x - 12, ship.y - 17, ship.x + 12, ship.y, ship.x - 12, ship.y + 17, al_map_rgb(0, 255, 0));
	al_draw_filled_rectangle(ship.x - 12, ship.y - 2, ship.x + 15, ship.y + 2, al_map_rgb(0, 0, 255));
}
void MoveShipUp(SpaceShip &ship)
{
	ship.y = ship.y - ship.speed;
	
	if(ship.y < 0)
		ship.y = 0;
}
void MoveShipDown(SpaceShip &ship)
{
	ship.y = ship.y + ship.speed;

	if(ship.y > HEIGHT)
		ship.y = HEIGHT;
}
void MoveShipLeft(SpaceShip &ship)
{
	ship.x = ship.x - ship.speed;

	if(ship.x < 0)
		ship.x = 0;
}
void MoveShipRight(SpaceShip &ship)
{
	ship.x = ship.x + ship.speed;

	if(ship.x >300)
		ship.x = 300;
}

void initBullet(Bullet bullet[])
{
	for(int i=0; i<NUM_OF_BULLETS;i++)
	{
		bullet[i].live = false;
		bullet[i].speed = 10;
		bullet[i].ID = BULLET;
	}
}
void fireBullet(Bullet bullet[], SpaceShip &ship)
{
	for(int i=0;i<NUM_OF_BULLETS;i++)
	{
		if(bullet[i].live == false)
		{
			bullet[i].x = ship.x;
			bullet[i].y = ship.y;
			bullet[i].live = true;
			//bullet[i].speed = 10;
			//bullet[i].ID = BULLET;
			break;
		}
	}

}
void MoveBullet(Bullet bullet[])
{
	for(int i=0; i<NUM_OF_BULLETS;i++)
	{
		if(bullet[i].live == true)
		{
			bullet[i].x = bullet[i].x + bullet[i].speed;

			if(bullet[i].x > 800)
				bullet[i].live = false;
		}
	}
}
void DrawBullet(Bullet bullet[])
{
	for(int i=0; i< NUM_OF_BULLETS; i++)
	{
		if(bullet[i].live == true)
			al_draw_filled_circle(bullet[i].x, bullet[i].y, 2, al_map_rgb(255, 255, 255));
	}
}
void collideBullet(Bullet bullet[], Comet comets[], SpaceShip &ship)
{
	for(int i=0; i<NUM_OF_BULLETS;i++)
	{
		if(bullet[i].live == true)
		{
			for(int j=0; j<NUM_OF_COMETS; j++)
			{
				if(comets[j].live == true)
				{
					if( bullet[i].x > (comets[j].x-comets[j].boundx) &&
						bullet[i].x < (comets[j].x+comets[j].boundx) &&
						bullet[i].y > (comets[j].y-comets[j].boundy) &&
						bullet[i].y < (comets[j].y+comets[j].boundy) )
					{
						bullet[i].live = false;
						comets[j].live = false;
						ship.score++;
					}
				}
			}
		}
	}
}

void initComets(Comet comets[])
{
	for(int i=0; i<NUM_OF_COMETS; i++)
	{
		comets[i].ID = ENEMY;
		comets[i].live = false;
		comets[i].speed = 5;
		comets[i].boundx = 18;
		comets[i].boundy = 18;
	}
}
void fireComets(Comet comets[])
{
	for(int i=0;i< NUM_OF_COMETS; i++)
	{
		if(comets[i].live == false)
		{
			if(rand()%500 == 0)
			{
				comets[i].live = true;
				comets[i].x = WIDTH;
				comets[i].y = rand() % 400;;
				break;
			}
		}
	}
}
void drawComets(Comet comets[])
{
	for(int i=0;i<NUM_OF_COMETS;i++)
	{
		if(comets[i].live == true)
		{
			al_draw_filled_circle(comets[i].x, comets[i].y, 20, al_map_rgb(255, 0, 0));
		}
	}
}
void updateComets(Comet comets[])
{
	for(int i=0;i<NUM_OF_COMETS;i++)
	{
		if(comets[i].live == true)
		{
			comets[i].x = comets[i].x - comets[i].speed;
		}
	}
}
void collideComets(Comet comets[], SpaceShip &ship)
{
	for(int i=0;i<NUM_OF_COMETS;i++)
	{
		if(comets[i].live == true)
		{
			if( (ship.x+ship.boundx) > (comets[i].x-comets[i].boundx) &&
				(ship.x-ship.boundx) < (comets[i].x+comets[i].boundx) &&
				(ship.y+ship.boundy) > (comets[i].y-comets[i].boundy) && 
				(ship.y-ship.boundy) < (comets[i].y+comets[i].boundy) )
			{
				comets[i].live = false;
				ship.lives--;
			}
			else if(comets[i].x < 0)
			{
				comets[i].live = false;
				ship.lives--;
			}
		}
	}
}