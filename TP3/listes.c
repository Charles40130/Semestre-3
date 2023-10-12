#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listes.h"


maillon* creerMaillon(int valeur){
  maillon* m;
  m=malloc(sizeof(maillon)*1);
  m->donnee=valeur;
  m->suivant=NULL;
  return m;

}


teteListe ajouterTete(teteListe maListe,int donnee){
  maillon* m;
  m=creerMaillon(donnee);
  m->suivant=maListe;
  return m;

}

void afficher(teteListe maListe){
  if(maListe==NULL){
    printf("----");
  }else{
    printf(" maillon %d ---",maListe->donnee);
    afficher(maListe->suivant);
  }
  printf("\n");
}

teteListe ajouterFin(teteListe maListe, int donnee){
  if(maListe==NULL){
    return ajouterTete(maListe,donnee);
  }else{
    maListe->suivant = ajouterFin(maListe->suivant,donnee);
    return maListe;
  }
}

teteListe ajouterPos(teteListe maListe,int valeur,int pos){
  if((maListe==NULL) ||(pos==1)){
    return ajouterTete(maListe,valeur);

    }else{
      maListe->suivant= ajouterPos(maListe->suivant,valeur,pos-1);
      return maListe;
    }
}

teteListe supprimerDebut(teteListe maListe){
  teteListe temp;
  if (maListe==NULL){
    return maListe;
  }else{
    temp=maListe->suivant;
    return temp;
  }
}

teteListe supprimerFin(teteListe maListe){
  if(maListe==NULL){
    return maListe;
  }else{
    if(maListe->suivant ==NULL){
      return supprimerDebut(maListe);
    }else{
      maListe->suivant= supprimerFin(maListe->suivant);
      return maListe;
    }
  }
}
teteListe supprimerPos(teteListe maListe, int pos){
  if(maListe==NULL){
    return maListe;
  }else{
    if(pos==1){
      return supprimerDebut(maListe);

    }else{
      maListe->suivant=supprimerPos(maListe->suivant,pos-1);
      return maListe;
    }
  }
}


teteListe viderListe(teteListe maListe){
  if(maListe==NULL){
    return maListe;
  }else{
    maListe=supprimerDebut(maListe);
    return viderListe(maListe->suivant);
  }
}

int chercherElt(teteListe maListe, int donnee,int pos){
  if(maListe==NULL){
    return -1;
  }else{
    if(donnee==maListe->donnee){
      return pos;
    }else{
      return chercherElt(maListe->suivant,donnee,pos+1);
    }
  }
}

teteListe supprVal(teteListe maListe, int donnee){
  int pos;
  pos=chercherElt(maListe,donnee,1);
  if (pos<0){
    printf("La valeur ne se trouve pas dans la liste \n");
    return maListe;
  }else{
    maListe=supprimerPos(maListe,pos);
    return maListe;
  }
}

teteListe supprValDoublons(teteListe maListe, int donnee){
  if(maListe==NULL){
    return maListe;
  }else{
    supprVal(teteListe maListe, int donnee)

    }

  }

}
