#include <stdio.h>
#include <conio.h>
int add(int a, int b);  /*function prototype*/
int main()
{
    int a,b;
    printf("Type the first number: ");
    scanf("%d",&a);
    printf("Type the second number: ");
    scanf("%d",&b);
    printf("Sum=%d\n",add(a,b));  /*function call*/
    getch();
}
int add(int a, int b)  /*function call*/
{
    int add;
    add=a+b;
    return add;
}
