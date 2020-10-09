#include<stdio.h>
#include<conio.h>
int main() {
    int a=2,b=3,c=4;
    a=a+b+c;
    b=a+b+c;
    c=a+b+c;
    printf("The last value of a,b,c is %d,%d and %d",a,b,c);
    getch();
}
