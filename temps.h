#ifndef TEMPS_H_INCLUDED
#define TEMPS_H_INCLUDED
#include <SDL/SDL.h>
#include <SDL/SDL_ttf.h>
#include <string.h>



typedef struct {
    SDL_Surface* textSurface;
    SDL_Rect positionText;
    char txt[20];
    SDL_Color couleurTxt;
    TTF_Font* police;
}Text;


typedef struct time
{
    int tempsdebut;
    int mm; 
    int ss;
    Text temps;
    
} Time;

//tempsenigme
void inittemps(Time *t);
int initText(Text* T);
void inittempsenig(Time *t);
int initTexttimeenig(Text* T);
void Timer(int *tempsdebut);
void update_timeenig(Time* T);
int loadFonttime(Text* T, char* angelina);
//tempsjeu
void update_time(Time* T);
void displaytime(Time T,SDL_Surface *screen);
void freeTexttime(Text T);






#endif
