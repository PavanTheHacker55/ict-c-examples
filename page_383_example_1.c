#include<stdio.h>
#include<conio.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a%2==0)
        printf("\nThe number %d is even.",a);
    else
        printf("\nThe number %d is odd.",a);
    getch();
}
