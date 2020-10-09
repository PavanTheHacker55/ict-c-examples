#include<stdio.h>
#include<conio.h>
int main()
{
    int n, i, a[100];
    printf("How many fibonacci number? ");
    scanf("%d",&n);
    printf("Enter 1st & 2nd number : ");
    scanf("%d %d", &a[1], &a[2]);
    for(i=3; i<=n; i++)
    {
        a[i]=a[i-1]+a[i-2];
        printf("\n Fibonacci number %d", a[i]);
    }
}
