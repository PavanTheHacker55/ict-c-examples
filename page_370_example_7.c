#include<stdio.h>
#include<conio.h>
int main() {
    int b,h;
    float area;
    printf("Enter the Base:");
    scanf("%d",&b);
    printf("Enter the Height:");
    scanf("%d", &h);
    area=.5*b*h;
    printf("\nThe area is %.2f",area);
    getch();
}

