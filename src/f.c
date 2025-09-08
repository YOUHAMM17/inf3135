#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fichier = fopen("test.txt", "w"); // Ouvre (ou crée) le fichier

    if (fichier == NULL) { // Vérifie si l'ouverture a échoué
        perror("Erreur d'ouverture du fichier");
        return EXIT_FAILURE;
    }

    fprintf(fichier, "Bonjour, ceci est un test.2\n"); // Écrit dans le fichier

    fclose(fichier); // Ferme le fichier
    return EXIT_SUCCESS;
}
