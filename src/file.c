#include <stdio.h>

int main() {
    // Ouvre un fichier en mode écriture
    FILE *fichier = fopen("notes.txt", "w");

    // Vérifie si l'ouverture a réussi
    if (fichier == NULL) {
        perror("Erreur d'ouverture");
        return 1;
    }

    // Écrit dans le fichier
    fprintf(fichier, "Bonjour, fichier !!\n");

    // Ferme le fichier
    fclose(fichier);

    return 0;
}
