#include<stdio.h>
#include<conio.h>
int main()
{
    int n, i, s;
    printf("Enter a number\n");
    scanf("%d", &n);
    for (i=2; i<=n-1; i++)
    {
        s=n%i;
        if (s==0)
        {
            printf("%d is not prime number",n);
            break;
        }
    }
    if (s!=0) printf("%d is prime number", n);
}
