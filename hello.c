// hello.c - Premier programme en C

#include <stdio.h>  // Bibliothèque pour afficher du texte

int main(void) {
    printf("Hello, world.\n"); // Affiche un message suivi d'un saut de ligne



    int tab[10] = {1, 2, 3};    // Initialisation partielle
int s = sizeof(tab);         // → 40 (10 éléments × 4 octets)
int length = sizeof(tab) / sizeof(tab[0]);  // → 10 éléments
printf("sizeof(tab) = %d\n", s); // Affiche la taille de l'array en octets
    printf("sizeof(tab[0]) = %d\n", sizeof(tab[0])); // Affiche la taille d'un élément de l'array en octets
    printf("length = %ld\n", length);  // Affiche le nombre d'éléments dans l'array
    return 0; // Indique que le programme s'est terminé avec succès
}
