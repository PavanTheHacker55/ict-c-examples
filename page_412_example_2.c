#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,n,s=0;
    printf("How many number:");
    scanf("%d",&n);
    for(i=1; i<=n; ++i)
    {
        printf("Type the marks: ");
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    printf("SUM=%d",s);
    getch();
}
