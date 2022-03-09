#ifndef Text_H
#define Text_H
#include <stdio.h>

#include <SDL/SDL.h> 
#include <SDL/SDL_image.h> 


typedef struct 
{
   SDL_Surface * miniture;
   SDL_Rect posminimap;
   SDL_Surface * bonhomme;
   SDL_Rect posbonhomme; 
}minimap;

//*affichage 
void afficherminimap (minimap m, SDL_Surface * screen);
void MAJMinimap(SDL_Rect posJoueur , minimap * m, SDL_Rect camera, int redimensionnement);
void Liberer (minimap * m);
#endif

