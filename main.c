#include <stdio.h>
#include <stdbool.h>

// Ensure no conflicting printf declaration exists
int main(int argc, char *argv[])
{
    // variables
    char name[10] = "";
    int age = 0;
    char bloodType = '\0';
    float x = 2.5;
    printf("%d\n", x); // ❌ Mauvais format → Affiche n’importe quoi !

    // input/output
    printf("Hello\nwhat is your name?\n");
    scanf("%s", name);
    printf("Hello.. %s\n", name);

    printf("How old are you?\n");
    scanf("%d", &age);
    printf("You are %d years old\n", age);

    printf("how tall are you?\n");
    float height = 0.0;
    scanf("%f", &height);
    printf("You are %.2f meters tall\n", height);

    printf("what your blood type?\n");

    scanf(" %c", &bloodType);
    printf("your blood type is %c\n", bloodType);

    return 0; // Good practice to return a value from main.
}