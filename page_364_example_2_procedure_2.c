#include<stdio.h>
int main() {
    char name[30];
    printf("Enter your name:");
    scanf("%[^\n]",name);
    printf("Thank you, %s",name);
    getch();
    return 0;
}


// input: Abir
// output: Thank you, Abir
