#include<stdio.h>
int main()
{
    int n,i,k,j=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(k=0;k<3;k++)
        {
            j+=1;
            printf("%d ",j);
        }
        j+=1;
        printf("PUM\n");
    }
    return 0;
}
