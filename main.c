#include <stdio.h>

int main(int argc, char *argv[]) {
    // printf("Hello, world..!\n");
     struct student {
          char name[50];
          int age;
          float gpa;
     };
     struct student s1 = {"John", 20, 3.5};
     printf("%s\n", s1.name);        
    
    getchar(); // 🔸 Attend que l'utilisateur appuie sur Entrée
     return 0;
}
