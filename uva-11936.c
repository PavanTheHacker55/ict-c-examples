#include<stdio.h>
int main()
{
    int i,j,n,k,x,y,z;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        if(x+y>z && x+z>y && y+z>x)
            printf("OK\n");
        else
            printf("Wrong!!\n");
    }
    return 0;
}
