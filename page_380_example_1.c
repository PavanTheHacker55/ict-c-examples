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
    m=(x>y)? (x>z)? x:z: (y>z)? y:z;
    printf("Maximum number = %d",m);
    getch();
}
