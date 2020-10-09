#include<stdio.h>
#include<conio.h>
int main() {
    int a,b,or,and,not1, not2,nor,nand;
    printf("Type the first input value :  ");
    scanf("%d",&a);
    printf("Type the second input value :  ");
    scanf("%d",&b);
    or=a||b;
    and=a&&b;
    not1=!a;
    not2=!b;
    nor=!(a||b);
    nand=!(a&&b);
    printf("\nOutput of OR gate=%d",or);
    printf("\nOutput of And gate=%d",and);
    printf("\nNot of %d is %d and %d is %d",a,not1,b,not2);
    printf("\nOutput of NOR gate=%d",nor);
    printf("\nOutput of NAND gate=%d",nand);
    getch();
}
