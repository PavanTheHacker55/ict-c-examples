#include<stdio.h>
#include<conio.h>
void main() {
    int y;
    printf("\n Enter a year:");
    scanf("%d",&y);
    if ((y % 400== 0) || (y % 100 != 0) && (y % 4==0))
        printf("\n %d is a Leap year", y);
    else
        printf("\n %d is not a Leap year",y);
    getch();
}
