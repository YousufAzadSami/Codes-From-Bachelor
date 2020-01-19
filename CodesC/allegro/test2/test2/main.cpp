#include <allegro5/allegro.h>
#include <allegro5/allegro_native_dialog.h>
int main (void)
{
	ALLEGRO_DISPLAY *display = NULL;
	if(!al_init())
	{
		al_show_native_message_box(NULL, NULL, NULL, "error",  NULL, NULL);
		return -1;
	}
}