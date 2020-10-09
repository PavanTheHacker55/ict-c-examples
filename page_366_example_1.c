#include<stdio.h>
#include<conio.h> // unnecessary header file for codeblocks

int main() {
    int a;
    printf("Decimal number: ");
    scanf("%d",&a);
    printf(" \nOctal number: %o",a);
    printf(" \nHexadecimal number: %x",a);
    getch();
}

// input: 14
// output:
// Octal number: 16
// Hexadecimal number: e

