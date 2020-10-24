#include<stdio.h>
int main()
{
    int t,a,b,c,d,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d x %d",&a,&b);
        scanf("%d x %d",&c,&d);
        if(a+d>b+c)
        {
            printf("Time 1\n");
        }
        else if(a+d<b+c)
        {
            printf("Time 2\n");
        }
        else
        {
            if(a+d-b-c>b+c-a-d)
            {
                printf("Time 1\n");
            }
            else if(a+d-b-c>b+c-a-d)
            {
                printf("Time 2\n");
            }
            else if(d>b)
            {
                printf("Time 1\n");
            }
            else if(b>d)
            {
                printf("Time 2\n");
            }
            else
            {
                printf("Penaltis\n");
            }
        }
    }
    return 0;
}
