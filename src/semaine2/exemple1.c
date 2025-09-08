#include <stdio.h>
#include <stdbool.h>

int main(void) {
    char c = 'A';          // caractère
    int i = 42;            // entier
    unsigned int ui = 300; // entier non signé
    bool b = true;         // booléen
    double d = 3.14;       // nombre à virgule

    printf("char c = %c (%d)\n", c, c);
    printf("int i = %d\n", i);
    printf("unsigned int ui = %u\n", ui);
    printf("bool b = %d\n", b);  // s'affiche comme 0 ou 1
    printf("double d = %.2lf\n", d);

    return 0;
}
