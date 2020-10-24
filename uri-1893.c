#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(b<=2&&b>=0)
    {
        printf("nova\n");
    }
    if(b<=96&&b>=3)
    {
        if(a<b)
        {
            printf("crescente\n");
        }
        else
        {
            printf("minguante\n");
        }

    }
    if(b<=100&&b>=97)
    {
        printf("cheia\n");
    }
    return 0;

}
