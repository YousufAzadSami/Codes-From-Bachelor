#include <allegro5\allegro.h>
#include <allegro5\allegro_image.h>
#include <allegro5\allegro_font.h>
#include <allegro5\allegro_ttf.h>

struct sprite
{
	int x;
	int y;
	int xVelocity;
	int yVelocity;

	int maxFrame;
	int currentFrame;
	int frameDelay;
	int frameCount;
	int frameWidth;
	int frameHeight;
	int coloumNumber;
	int animationDirection;

	ALLEGRO_BITMAP *image;
};

int width = 640;
int height = 480;
const int numberOfOrbs = 1000;

void init_orbs(struct sprite &dragon, ALLEGRO_BITMAP *image);
void update_orbs(struct sprite &dragon);
void draw_orbs(struct sprite &dragon);

int main(void)
{
	//variables
	bool done = false;
	bool redraw = true;
	float gameTime;
	int FPS=0;
	int gameFPS = 0;
	struct sprite orbs[numberOfOrbs]; 


	//allegro variable
	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_EVENT_QUEUE *event_queue = NULL;
	ALLEGRO_TIMER *timer;
	ALLEGRO_BITMAP *image;
	ALLEGRO_FONT *font18;
	
	//program init
	if(!al_init())										//initialize Allegro
		return -1;

	display = al_create_display(width, height);			//create our display object

	if(!display)										//test display object
		return -1;

	//addon init
	al_install_keyboard();
	al_init_image_addon();
	al_init_font_addon();
	al_init_ttf_addon();

	image = al_load_bitmap("space-core.png");
	font18 = al_load_font("arial.ttf", 18, 0);

	for(int i=0; i<numberOfOrbs; i++)
	{
		init_orbs(orbs[i], image);
	}
	//al_convert_mask_to_alpha(image, al_map_rgb(106, 76, 48));
	
	event_queue = al_create_event_queue();
	timer = al_create_timer(1.0 / 60);
	al_register_event_source(event_queue, al_get_timer_event_source(timer));
	al_register_event_source(event_queue, al_get_keyboard_event_source());

	al_start_timer(timer);
	gameTime = al_current_time();
	while(!done)
	{
		ALLEGRO_EVENT ev;
		al_wait_for_event(event_queue, &ev);
		FPS++;
		if(ev.type == ALLEGRO_EVENT_KEY_DOWN)
		{
			switch(ev.keyboard.keycode)
			{
			case ALLEGRO_KEY_ESCAPE:
				done = true;
				break;
			case ALLEGRO_KEY_LEFT:
				//orbs.animationDirection = 1;
				//orbs.xVelocity = -5;
				break;
			case ALLEGRO_KEY_RIGHT:
				//orbs.animationDirection = -1;
				//orbs.xVelocity = 5;
				break;
			case ALLEGRO_KEY_UP:
				
				break;
			case ALLEGRO_KEY_DOWN:
				
				break;
			}
		}
		else if(ev.type == ALLEGRO_EVENT_TIMER)
		{
			FPS++;
			if(al_current_time() - gameTime >= 1)
			{
				gameFPS = FPS;
				gameTime = al_current_time();
				
				FPS = 0;

			}
			redraw = true;
			for(int i=0; i<numberOfOrbs; i++)
			{
				update_orbs(orbs[i]);
			}
		}

		if(redraw == true && al_event_queue_is_empty(event_queue))
		{
			redraw = false;
			for(int i=0; i<numberOfOrbs; i++)
			{
				draw_orbs(orbs[i]);
			}
			al_draw_textf(font18, al_map_rgb(255,0,0), 5,5,0, "FPS:%2i", gameFPS);
			al_flip_display();
			al_clear_to_color(al_map_rgb(0,0,0));
		}
						
	}

	
	al_destroy_bitmap(image);
	al_destroy_event_queue(event_queue);
	al_destroy_display(display);						//destroy our display object

	return 0;
}

void init_orbs(struct sprite &dragon, ALLEGRO_BITMAP *image)
{
	dragon.x = rand() % (width - 50) + 20 ;
	dragon.y = rand() % (width - 50) + 20;
	dragon.xVelocity = rand() % 5;
	dragon.yVelocity = rand() % 5;

	dragon.maxFrame = 71;
	dragon.currentFrame = 0;
	dragon.frameCount = 0;
	dragon.coloumNumber = 16;
	dragon.frameDelay = 5;
	dragon.frameHeight = 64;
	dragon.frameWidth = 64;
	dragon.animationDirection = 1;

	dragon.image = image;
}
void update_orbs(struct sprite &dragon)
{
	dragon.frameCount++;

	if(dragon.frameCount >= dragon.frameDelay)
	{
		dragon.frameCount = 0;
		dragon.currentFrame = dragon.currentFrame + dragon.animationDirection;

		if(dragon.currentFrame >= dragon.maxFrame)
		{
			dragon.currentFrame = 0;
		}else if(dragon.currentFrame < 0)
		{
			dragon.currentFrame = dragon.maxFrame - 1;
		}
	}

	dragon.x += dragon.xVelocity;
	dragon.y += dragon.yVelocity;

	if((dragon.x <= 0) || (dragon.x >= width-dragon.frameWidth))
	{
		dragon.xVelocity = -(dragon.xVelocity);
		dragon.animationDirection = -(dragon.animationDirection);
	}
	if((dragon.y >= height-dragon.frameHeight) || (dragon.y <= 0))
	{
		dragon.yVelocity = -(dragon.yVelocity);
		dragon.animationDirection = -(dragon.animationDirection);
	}
}
void draw_orbs(struct sprite &dragon)
{
	int fx = (dragon.currentFrame % dragon.coloumNumber) * dragon.frameWidth;
	int fy = (dragon.currentFrame / dragon.coloumNumber) * dragon.frameHeight;
	al_draw_bitmap_region(dragon.image, fx, fy, dragon.frameWidth, dragon.frameHeight, dragon.x, dragon.y, 0);
}