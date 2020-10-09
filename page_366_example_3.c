#include<stdio.h>
#include<conio.h> // unnecessary header file for codeblocks

int main() {
    int a;
    printf("Hexadecimal number: ");
    scanf("%x",&a);
    printf(" \nDecimal number: %d",a);
    printf(" \nOctal  number: %o",a);
    getch();
}

// input: 2af
// output:
// Decimal number: 6687
// Octal number: 1257

