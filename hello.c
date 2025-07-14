#include <stdio.h>

int main(int argc, char *argv[]) {
   // printf("Hello, world..!\n");
    struct student {
        char name[50];
        int age;
        float gpa;
    };
    struct student s1 = {"paul", 20, 3.5};
    printf("%s\n", s1.name);        
    return 0;
}
