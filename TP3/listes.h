#ifndef LISTES_H
#define LISTES_H

#endif

typedef struct maillon{
  int donnee;
  struct maillon* suivant;
}maillon;

typedef maillon* teteListe;

/* Auteur : Charles Mendiburu */
/* Date : 12/10/2023 */
/* Entrees :  une donnee*/
/* Sorties : un maillon */
/* Résumé :  creer un maillon avec la donnee associée */
maillon* creerMaillon(int donnee);

/* Auteur : Charles Mendiburu */
/* Date : 12/10/2023 */
/* Entrees :  une tete de liste, une donnee */
/* Sorties : une tete de liste */
/* Résumé :  ajouter un maillon en tête de liste */
teteListe ajouterTete(teteListe maListe, int donnee);

/* Auteur : Charles Mendiburu */
/* Date : 12/10/2023 */
/* Entrees :  une tete de liste */
/* Sorties :  */
/* Résumé :  Affiche une liste chaînée */
void afficher(teteListe maListe);

/* Auteur : Charles Mendiburu */
/* Date : 12/10/2023 */
/* Entrees :  une tete de liste et  une donnee*/
/* Sorties :  une tete de liste */
/* Résumé :  ajoute une donnée à la fin une liste chaînée */
teteListe ajouterFin(teteListe maListe, int donnee);

/* Auteur : Charles Mendiburu */
/* Date : 12/10/2023 */
/* Entrees :  une tete de liste, une donnee et une position */
/* Sorties :  une tete de liste */
/* Résumé :  ajoute une donnée à une position donnée dans une liste chaînée */
teteListe ajouterPos(teteListe maListe,int valeur,int pos);

/* Auteur : Charles Mendiburu */
/* Date : 12/10/2023 */
/* Entrees :  une tete de liste */
/* Sorties :  une tete de liste */
/* Résumé :  supprime la donnée en tête de liste */
teteListe supprimerDebut(teteListe maListe);

/* Auteur : Charles Mendiburu */
/* Date : 12/10/2023 */
/* Entrees :  une tete de liste */
/* Sorties :  une tete de liste */
/* Résumé :  supprime une donnée à la fin d'une liste chaînée */
teteListe supprimerFin(teteListe maListe);

/* Auteur : Charles Mendiburu */
/* Date : 12/10/2023 */
/* Entrees :  une tete de liste et une position */
/* Sorties :  une tete de liste */
/* Résumé :  supprime une donnée à une position donnée dans une liste chaînée */
teteListe supprimerPos(teteListe maListe,int pos);

/* Auteur : inès dc  */
/* Date : 9 oct 2023 */
/* Résumé :  fonction permettant de supprimer un maillon dont
            la valeur est passée en paramètre  */
/* Entrée(s) :  une tete de liste et la valeur*/
/* Sortie(s) :  la nouvelle liste */
teteListe supprVal(teteListe maListe, int val);


/* Auteur : Charles Mendiburu */
/* Date : xxxxx */
/* Entrees :  une tete de liste */
/* Sorties :  une tete de liste */
/* Résumé :  Chercher la position d'un élément dans une liste */
int chercherElt(teteListe maListe, int donnee,int pos);


/* Auteur : Charles Mendiburu */
/* Date : xxxxx */
/* Entrees :  une tete de liste */
/* Sorties :  une tete de liste */
/* Résumé :  supprime le contenu de la liste chaînée */
teteListe viderListe(teteListe maListe);


/* Auteur : Charles Mendiburu  */
/* Date : 9 oct 2023 */
/* Résumé :  fonction permettant de supprimer tous les maillons dont
             la valeur est passée en paramètre  */
/* Entrée(s) :  une tete de liste et la valeur*/
/* Sortie(s) :  la nouvelle liste */
teteListe supprValDoublons(teteListe maListe, int donnee);
