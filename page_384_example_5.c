#include<stdio.h>
#include<conio.h>
int main() {
    int a,b,x;
    printf("Type the two number: ");
    scanf("%d %d",&a,&b);
    x=(a<b)?a:b;
    again:
        if(a%x==0 && b%x==0)
            printf("GCD of %d and %d is %d",a,b,x);
        else {
                x=x-1;
                goto again;
        }
    getch();
}
