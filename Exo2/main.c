#include <stdlib.h>
#include <stdio.h>
#include "file.h"
#include <string.h>



int main(){
    printf("Ceci est l'exo2 du TP2 \n");
    char* prenom;
    prenom=(malloc(sizeof(char)*10));
    //printf("Saisir prenom \n");
    ///scanf("%d",);
    File f=NULL;
    f=enfiler(f,"benoit");
    f=enfiler(f,"Karis");
    f=enfiler(f,"Hugo");
    afficherF(f);

    printf("--------SCENARIO-------- \n");
    printf("<%s> :  'J'AI ACHETÉ MA POTION !' \n",f->prenom);
    prenom=defiler(f);
    afficherF(f);
    return 0;
}
