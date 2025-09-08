#include <stdio.h>
int main(void) {
    int a = 7, b = 3;

    printf("%+08d\n", a + b);  // 10
    printf("a - b = %d\n", a - b);  // 4
    printf("a * b = %d\n", a * b);  // 21
    printf("a / b = %d\n", a / b);  // 2 (division entière)
    printf("a %% b = %d\n", a % b); // 1 (reste)

    printf("a == b ? %d\n", a == b); // 0 (faux)
    printf("a > b ? %d\n", a > b);   // 1 (vrai)

    printf("!(a > b) = %d\n", !(a > b)); // 0 (faux)
    printf("(a > 5 && b < 5) = %d\n", (a > 5 && b < 5)); // 1 (vrai)

    return 0;
}
