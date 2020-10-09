#include<stdio.h>
#include<ctype.h> // unnecessary header file for codeblocks

int main() {
    char x;
    printf("Enter a small letter: ");
    x=getchar();
    printf("Capital Letter: ");
    putchar(toupper(x));
}

// input: a
// output: A
