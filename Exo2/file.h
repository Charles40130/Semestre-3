#ifndef FILE_H
#define FILE_H
/* Le prototype/signature de toutes mes fonctions/procédures */


typedef struct ElementF{
    char* prenom;
    struct ElementF* precedent;
}ElementF;

typedef ElementF* File;


ElementF* creerElementFile(char* prenom);

File enfiler(File f,char* prenom);
void afficherF (File f);

char* defiler(File* f);

int compterCache(File f,int acc);

int compterF(File f);

File inverserF(File f);
void viderFile(File f);
#endif
