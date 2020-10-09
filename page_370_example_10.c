#include<stdio.h>
#include<conio.h>
int main ( ) {
    int r;
    float area;
    printf ("Enter integer value for radius:");
    scanf ("%d", &r) ;
    area = 3.14*r*r;
    printf("\n Area of circle =%f", area);
    getch();
}
