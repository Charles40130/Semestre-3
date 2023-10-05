#include <stdlib.h>
#include <stdio.h>
#include "file.h"
#include <string.h>

ElementF* creerElementFile(char prenom[]){
    ElementF* newElement;
    newElement->prenom=malloc(sizeof(char)*strlen(prenom));
    strcpy(newElement->prenom, prenom); // Copier la chaîne dans le champ prenom
    newElement->precedent = NULL;
    return newElement;
}

File enfiler(File f,char prenom[]){
    ElementF* nvElt;
    if(f==NULL){
        nvElt=creerElementFile(prenom);
        f=nvElt;
        return f;
    }else{
        f->precedent=enfiler(f->precedent,prenom);
        return f;
    }
}

void afficherF (File f){
    if (f==NULL){
        printf("----------\n");
    }else{
        printf("elt => %s \n",f->prenom);
        afficherF(f->precedent);
    }
}
