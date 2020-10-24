#include<stdio.h>
int main()
{
    int h1,m1,h2,m2,h,m,M;
    while(scanf("%d%d%d%d",&h1,&m1,&h2,&m2)!=EOF)
    {
        if(h1==0&&m1==0&&h2==0&&m2==0)
        {
            break;

        }
        h=h2-h1;
        m=m2-m1;
        M=h*60+m;
        if(M<0)
        {
            M=M+1440;
        }
        printf("%d\n",M);
    }
    return 0;
}
