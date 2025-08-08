// entier_valide.c
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>

static int lire_entier_dans_intervalle(int min, int max, int *out_val) {
    char ligne[128];

    while (1) {
        if (!fgets(ligne, sizeof ligne, stdin)) {
            fprintf(stderr, "Erreur de lecture.\n");
            return 0;
        }

        // Supprimer '\n'
        size_t n = strlen(ligne);
        if (n > 0 && ligne[n-1] == '\n') ligne[n-1] = '\0';

        // Conversion
        errno = 0;
        char *endptr = NULL;
        long val = strtol(ligne, &endptr, 10);

        // Vérif conversion
        if (endptr == ligne) {
            printf("Veuillez entrer un entier.\n> ");
            continue;
        }
        if (errno == ERANGE || val < INT_MIN || val > INT_MAX) {
            printf("Valeur hors limites d'un int.\n> ");
            continue;
        }

        // Vérif reste de la ligne = que des espaces
        while (*endptr && isspace((unsigned char)*endptr)) endptr++;
        if (*endptr != '\0') {
            printf("Entrée invalide (caractères en trop).\n> ");
            continue;
        }

        // Vérif intervalle
        if (val < min || val > max) {
            printf("Entrez un entier entre %d et %d.\n> ", min, max);
            continue;
        }

        *out_val = (int)val;
        return 1;
    }
}

int main(void) {
    int age;

    printf("Entrez votre âge (1-120).\n> ");
    if (!lire_entier_dans_intervalle(1, 120, &age)) {
        return 1;
    }

    printf("Âge validé : %d\n", age);
    return 0;
}
