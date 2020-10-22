#include<stdio.h>
int div(int x)
{
    int  c=1;
    while(1)
    {
        if(x==1)
            break;
       else if(x%2==0)
            x=x/2;
        else if(x%2==1)
            x=3*x+1;
        c++;
    }
    return c;
}

int main()
{
    int  a,b,r,i,d,ans,t,p,q;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        d=1;p=a;q=b;
        if(a>b)
        {
            t=a;
            a=b;
            b=t;
        }
        for(i=a;i<=b;i++)
              {
                  r=div(i);
                  if(r>d)
                    {ans=r;
                    d=r;}
                  else
                    ans=d;
              }
              printf("%d %d %d\n",p,q,ans);
    }
    return 0;
}

