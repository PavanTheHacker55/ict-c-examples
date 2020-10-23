#include<stdio.h>
int main()
{
    int n,i,j,a[15],s[15][30],b[15],swaped,t;
    while(scanf("%d",&n)==1)
    {
        for(i=0; i<n; i++)
        {
            getchar();
            scanf("%s %d",s[i],&a[i]);
            b[i]=i;
        }
        while(1)
        {
            swaped=0;
            for(i=0; i<n-1; i++)
            {
                j=i+1;
                if(a[i]>a[j])
                {
                    swaped=1;
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                    t=b[i];
                    b[i]=b[j];
                    b[j]=t;
                }
            }
            if(swaped==0)
            {
                break;
            }
        }
        for(i=0; i<n; i++)
        {
            printf("%s",s[b[i]]);
            if(i!=n-1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
