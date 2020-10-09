#include<stdio.h>
long int factorial(int n);  /*function prototype*/

int main()
{
    int n;
    printf("Type the desire value :  ");
    scanf("%d",&n);
    printf("Factorial value is %ld\n",factorial(n));
}
long int factorial(int n)
{
    if (n<=1) return (1);
    else return (n*factorial(n-1));
}
