#ifndef BACKGROUND_H_INCLUDED
#define BACKGROUND_H_INCLUDED

typedef struct
{
SDL_Surface* stage1_1;
SDL_Rect backpos; //for stage 1-1 and 1-2 ez :p
SDL_Rect backpos2; // for stage 1-3
SDL_Surface* stage1_2;
SDL_Surface* stage1_3;
SDL_Surface* stage1_4;
SDL_Surface* stage1_5;
SDL_Surface* stage2_1;
SDL_Surface* stage2_2;
SDL_Surface* platform;
SDL_Rect platformpos;
int mov;
}background;

void initbackground(background* b);
void affichezstage1_1(background* b,SDL_Surface* screen);
void affichezstage1_2(background* b,SDL_Surface* screen);
void affichezstage1_3(background* b,SDL_Surface* screen);
void affichezstage1_4(background *b,SDL_Surface *screen);
void affichezstage1_5(background *b,SDL_Surface *screen);
void affichezstage2_1(background *b,SDL_Surface *screen);
void affichezstage2_2(background *b,SDL_Surface* screen);
void affichezplatform2(background *b,SDL_Surface* screen);
void affichezplatform(background *b,SDL_Surface* screen);
void changeposplatform(background *b);

#endif 
