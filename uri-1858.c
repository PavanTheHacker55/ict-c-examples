
#include<stdio.h>
int main()
{
    int i,n,a,c,min=21,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        count++;
        if(a<min)
        {
            min=a;
            c=count;
        }

    }
    printf("%d\n",c);
    return 0;
}
