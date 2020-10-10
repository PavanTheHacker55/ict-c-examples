#include<stdio.h>

int main()
{
    char ch;
    printf("Enter a letter: ");
    ch = getche();
    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf(" is a vowel\n");
            break;
        default:
            printf(" is a consonant\n");
    }
    return 0;
}
