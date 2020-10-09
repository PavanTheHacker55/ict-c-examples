#include<stdio.h>
#include<conio.h>
int main() {
    int y;
    printf("Enter a year:");
    scanf("%d",&y);
    if (y % 400== 0)
        printf("%d is a Leap year", y);
    else if ((y % 100 != 0) && (y % 4==0))
        printf("%d is a Leap year", y);
    else
        printf("%d is not a Leap year", y);
    getch();
}
