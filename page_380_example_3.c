#include<stdio.h>
#include<conio.h>
void main()  {
    int x,y,z,m;
    printf("Enter 1st number = ");
    scanf("%d",&x);
    printf("Enter 2nd number = ");
    scanf("%d",&y);
    printf("Enter 3rd number = ");
    scanf("%d",&z);
    m=(x>y)? (x>z)? (y>z)? y:z:x: (y>z)? (x>z)? x:z:y;
    printf("Middle number = %d",m);
    getch();
}
