#ifndef FILE_H
#define FILE_H
/* Le prototype/signature de toutes mes fonctions/procédures */


typedef struct ElementF{
    char* prenom;
    struct ElementF* precedent;
}ElementF;

typedef ElementF* File;


ElementF* creerElementFile(prenom);

File enfiler(File f,char prenom[]);
void afficherF (File f);

#endif