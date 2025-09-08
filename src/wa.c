#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char mode;
    char ligne[256];

    printf("Voulez-vous écraser (w) ou ajouter (a) ? ");
    scanf(" %c", &mode);
    getchar(); // consommer le \n laissé par scanf

    FILE *fichier = NULL;

    if (mode == 'w') {
        fichier = fopen("journal.txt", "w");
    } else if (mode == 'a') {
        fichier = fopen("journal.txt", "a");
    } else {
        printf("Mode invalide.\n");
        return EXIT_FAILURE;
    }

    if (!fichier) {
        perror("Erreur d'ouverture du fichier");
        return EXIT_FAILURE;
    }

    printf("Entrez le texte à écrire :\n> ");
    if (fgets(ligne, sizeof(ligne), stdin) == NULL) {
        fprintf(stderr, "Erreur de lecture.\n");
        fclose(fichier);
        return EXIT_FAILURE;
    }

    // Supprimer le \n final si présent
    size_t n = strlen(ligne);
    if (n > 0 && ligne[n-1] == '\n') {
        ligne[n-1] = '\0';
    }

    fprintf(fichier, "%s\n", ligne);

    if (fclose(fichier) != 0) {
        perror("Erreur à la fermeture du fichier");
        return EXIT_FAILURE;
    }

    printf("Texte écrit avec succès.\n");
    return EXIT_SUCCESS;
}
