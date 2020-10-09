#include<stdio.h>
#include<conio.h> // unnecessary header file for codeblocks

int main() {
    char n;
    printf("Enter any lower case character:");
    scanf("%c",&n);
    printf("You entered : %c",n-32);
    getch();
}

// input: a
// output: A
