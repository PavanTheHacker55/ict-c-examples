#include<stdio.h>
int main()
{
    int t,r,g,b,i,o;
    char s[10];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s",s);
        scanf("%d%d%d",&r,&g,&b);
        getchar();
        if(strcmp(s,"min")==0)
        {
            if(r<=g&&r<=b)
            {
                o=r;
            }
            else if(b<=g&&b<=r)
            {
                o=b;
            }
            else
            {
                o=g;
            }
        }
        else if(strcmp(s,"max")==0)
        {
            if(r>=g&&r>=b)
            {
                o=r;
            }
            else if(b>=g&&b>=r)
            {
                o=b;
            }
            else
            {
                o=g;
            }
        }
        else if(strcmp(s,"mean")==0)
        {
            o=(r+g+b)/3;
        }
        else
        {
            o=r*.30+g*.59+b*.11;
        }
        printf("Caso #%d: %d\n",i,o);
    }
    return 0;
}
