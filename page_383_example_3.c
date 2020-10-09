#include<stdio.h>
#include<conio.h>
void main() {
    int a, b;
    printf("Enter 1st value :");
    scanf("%d",&a);
    printf("Enter 2nd value :");
    scanf("%d",&b);
    if (a>b)
        printf("Largest Number is : %d", a);
    else
        printf("Largest Number is: %d", b);
    getch();
}
