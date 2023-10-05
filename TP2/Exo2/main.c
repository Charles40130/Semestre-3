#include <stdlib.h>
#include <stdio.h>
#include "file.h"
#include <string.h>



int main(){
    printf("Ceci est l'exo2 du TP2 \n");
    File f=NULL;
    char prenom[]="Benoit";
    f=enfiler(f,prenom);
    afficherF(f);
    return 0;
}