#ifndef PERSO_H_INCLUDED
#define PERSO_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>


typedef struct {

	SDL_Surface *image;
	SDL_Rect position;

}Personne;



void initialiserperso(Personne *p);
void afficher_perso(SDL_Surface *screen,Personne p);
void deplacer_perso(Personne *p,SDL_Event event);
void free_perso(Personne p);


#endif
