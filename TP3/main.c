#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listes.h"

int main(){
 printf("Voici le TP3 \n");
 int test;

 teteListe l=NULL;
 l=ajouterTete(l,10);
 afficher(l);
l=ajouterTete(l,7);
afficher(l);
l=ajouterTete(l,16);
afficher(l);

l=ajouterFin(l,15);
afficher(l);

l=ajouterPos(l,5,2);
afficher(l);

l=supprimerDebut(l);
afficher(l);

l=supprimerFin(l);
afficher(l);

l=supprimerPos(l,2);
afficher(l);

//l=viderListe(l);
//afficher(l);
l=supprVal(l,5);
afficher(l);

l=supprVal(l,2);
afficher(l);
  return 0;
}
