#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char ligne[256];

    printf("Entrez le texte à ajouter dans le fichier :\n> ");

    if (fgets(ligne, sizeof(ligne), stdin) == NULL) {
        fprintf(stderr, "Erreur de lecture.\n");
        return EXIT_FAILURE;
    }

    // Retirer le \n final si présent
    size_t n = strlen(ligne);
    if (n > 0 && ligne[n-1] == '\n') {
        ligne[n-1] = '\0';
    }

    FILE *fichier = fopen("journal.txt", "a");
    if (fichier == NULL) {
        perror("Erreur d'ouverture du fichier");
        return EXIT_FAILURE;
    }

    if (fprintf(fichier, "%s\n", ligne) < 0) {
        perror("Erreur d'écriture dans le fichier");
        fclose(fichier);
        return EXIT_FAILURE;
    }

    if (fclose(fichier) != 0) {
        perror("Erreur à la fermeture du fichier");
        return EXIT_FAILURE;
    }

    printf("Texte ajouté avec succès.\n");
    return EXIT_SUCCESS;
}
