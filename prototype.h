#ifndef PROTOTYPE_H
#define PROTOTYPE_H
typedef struct {
char rp1[100],rp2[100],rp3[100],question[100];
   float juste; 
}enigme;


void main();
enigme alea();
void afficheenigme(enigme e,SDL_Surface *ecran);

#endif