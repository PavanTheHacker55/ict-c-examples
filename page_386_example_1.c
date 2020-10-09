#include<stdio.h>
#include<conio.h>
int main() {
    int a,b,c;
    printf("Enter 3 integer values:");
    scanf("%d  %d  %d", &a, &b, &c);
    if ((a > b) && (a > c))
        printf("\n Largest Value is: %d", a);
    else if ((b > a) && (b > c))
        printf("\n Largest Value is: %d", b);
    else
        printf("\n Largest Value is: %d", c);
    getch();
}
