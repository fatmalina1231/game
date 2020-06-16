#ifndef FIREBALL_H_INCLUDED
#define FIREBALL_H_INCLUDED
typedef struct
{
SDL_Surface* fire;
SDL_Rect firepos;
int r;
}fireball;

void initfireball1stage1_3(fireball *f);
void initfireball2stage1_3(fireball *f);
void changefireball1pos(fireball *f);
void changefireball2pos(fireball *f);
void affichezfireball(fireball *f,SDL_Surface *screen);
#endif