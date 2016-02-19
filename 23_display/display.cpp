#include <stdio.h>
#include <allegro5\allegro.h>

int main(int argc, char **argv{
	
	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_EVENT_QUEUE *event_queue = NULL;
	
	if(!al_init()) {
	fprintf(stderr, "failed initialize allegro!\n");
	return -1;
	}
	
	display = al_create_display(640, 480);
	if(!display) {
	fprintf(stderr, "failed to create display!\n");
	return -1;
	}
	
	event_queue = al_create_event_queue();
	if(!event_queue) {
	fprintf(stderr, "failed to create event_queue!\n");
	al_destroy_display(display);
	return -1;
	}

	al_register_event_source(event_queue, al_get_display_event_source(display));
	al_clear_to_color(al_map_rgb(0,0,0));
	}
