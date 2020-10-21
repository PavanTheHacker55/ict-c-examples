#include<stdio.h>
int main()
{
    int n,a,b=0,c=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a==0)
        {
            b++;
        }
        else
        {
            c++;
        }
    }
    if(b>c)
    {
        printf("Y\n");
    }
    else
    {
        printf("N\n");
    }
    return 0;
}
