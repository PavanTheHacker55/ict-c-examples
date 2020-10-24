#include<stdio.h>
int main()
{
    char ch[1000];
    int t,n[1000],i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s%d",ch,&n[i]);
        if(strcmp(ch,"Thor")==0)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }
    return 0;
}
