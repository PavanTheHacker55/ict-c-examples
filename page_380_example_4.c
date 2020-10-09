#include <stdio.h>
#include <conio.h>
int main( ) {
    int year;
    printf("Enter the year(4 digit) to check: ");
    scanf("%d",&year);
    ((year%400==0)||(year % 100!=0)&&(year%4==00))?printf("year %d is a leap year",year): printf("year %d is not a leap year",year);
    getch( );
}
