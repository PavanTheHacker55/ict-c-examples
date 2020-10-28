#include<stdio.h>
int main()
{
    int X,i;
    for( ; ; )
    {
        scanf("%d",&X);
        if(X==0)
        {
            break;
        }
        for(i=1;i<=X;i++)
        {
            printf("%d",i);
            while(i<X)
            {
                printf(" ");
                break;
            }
        }
        printf("\n");
    }
    return 0;
}
