#include<stdio.h>
#include<conio.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a>=0)
        printf("\nThe number %d is positive.",a);
    else
        printf("\nThe number %d is Negative.",a);
    getch();
}
