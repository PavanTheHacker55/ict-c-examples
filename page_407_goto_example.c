#include<stdio.h>
#include<conio.h>
int main()
{
    int a,x;
    long fact=1;
    xx:
        printf("\nType the positive integer: ");
        scanf("%d",&x);
    if(x<0)
    {
        printf("\Negative number not allowed. ");
        goto xx;
    }
    else if(x==0) printf("\Factorial=1");
    else
    {
        for(a=2; a<=x; a++) fact=fact*a;
        printf("\Factorial=%ld",fact);
    }
    getch();
}
