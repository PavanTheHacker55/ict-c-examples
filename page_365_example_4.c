#include<stdio.h>
#include<ctype.h> // unnecessary header file for codeblocks

int main() {
    char x;
    printf("Enter a Capital character: ");
    x=getchar();
    printf("Small Letter: ");
    putchar(tolower(x));
}

// input: A
// output: a
