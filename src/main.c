#include <stdio.h>
#include <stdbool.h>
#include <stddef.h> //? for size_t try without this line
int carre(int x) {
    printf("%d\n",x); // print the value of x
    return x * x; // function to calculate square
}

double f(int x, double y) {
    return x + y; // function to add two numbers
}
// Ensure no conflicting printf declaration exists
int main(int argc, char *argv[])
{
; // call the function

    carre(5); // call the function
    // int x = 5; // variable declaration
  size_t i = 0; // variable declaration
printf("   %.4d\n", carre(2)); // print the value of i
    printf(" $ %.2f\n",f(5, 3.2) ); // print the value of i

    // output
    printf("Hello, welcome to C programming!\n");
    
    // using puts for a simple string output
    // Note: puts automatically adds a newline at the end
    // This is an alternative to printf for simple strings
    // and is defined in stdio.h as extern int puts(const char *__s);

    // input/output
    puts("Hello, World!\n");
   
    return 0; // Good practice to return a value from main.
}