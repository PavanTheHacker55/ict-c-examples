#include<stdio.h>
#include<conio.h>
int main() {
    int a,b,xor, xnor;
    printf("Type the first input value:  ");
    scanf("%d",&a);
    printf("Type the second input value:  ");
    scanf("%d",&b);
    xor=a^b;
    xnor=!( a^b);
    printf("\nOutput of XOR gate=%d",xor);
    printf("\nOutput of XNOR gate=%d",xnor);
    getch();
}
