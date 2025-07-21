#include <stdio.h>
#include <stdbool.h>
int main(int argc, char *argv[]) {
   
   
    printf("Hello, welcome to C programming!\n");     
    
    bool isTrue = true; // Déclaration d'une variable booléenne initialisée à true
    // bool isTrue = false; // Déclaration d'une variable booléenne initialisée à false
    if (isTrue) {
        printf("isTrue is true!\n");
    } else {
        printf("isTrue is false!\n");
    }
    return 0; // Good practice to return a value from main
}