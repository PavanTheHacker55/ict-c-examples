#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n;
    printf("Enter how many line you need to make pyramid = ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)  printf("%d",j);
        printf("\n");
    }
    getch();
}
