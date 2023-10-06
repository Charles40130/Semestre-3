#include <stdlib.h>
#include <stdio.h>
#include "file.h"
#include <string.h>

ElementF* creerElementFile(char* prenom){
    ElementF* newElement;
    newElement=malloc(sizeof(ElementF)*1);
    newElement->precedent = NULL;
    newElement->prenom=prenom;
    return newElement;
}

File enfiler(File f,char* prenom){
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

char* defiler(File* f){
  char* valeurDefilee;
  ElementF* temp;
  if(f!=NULL){
    valeurDefilee=(*f)->prenom;
    temp=(*f)->precedent;
    free(f);
    (*f)=temp;
  }
  return valeurDefilee;
}
int compterCache(File f,int acc){
  if (f==NULL){
    return acc;
  }else{
    return compterCache(f->precedent,acc+1);
  }
}

int compterF(File f){
  return compterCache(f,0);
}

File inverserF(File f){
  char* elt;
  if(f==NULL){
    return f;
  }else{
    elt=defiler(&f);
    f=inverserF(f);
    enfiler(f,elt);
    return f;
  }
}

void viderFile(File f){
  if(f!=NULL){
    defiler(f);
    viderFile(f->precedent);
  }
}
