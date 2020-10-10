#include<stdio.h>

int main()
{
    char ch;
    printf("Enter A, a, B or b: ");
    ch = getche();
    switch(ch) {
    case 'A':
        printf("\nYou've written A.");
        break;
    case 'a':
        printf("\nYou've written a.");
        break;
    case 'B':
        printf("\nYou've written B.");
        break;
    case 'b':
        printf("\nYou've written b.");
        break;
    default:
        printf("\nYou've not written A, a, B or b");
    }
    return 0;
}
