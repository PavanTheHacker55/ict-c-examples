#include<stdio.h>
#include<conio.h> // unnecessary header file for codeblocks

int main() {
    int a;
    printf("Octal number: ");
    scanf("%o",&a);
    printf(" \nDecimal number: %d",a);
    printf(" \nHexadecimal number: %x",a);
    getch();
}

// input: 17
// output:
// Decimal number: 15
// Hexadecimal number: f

