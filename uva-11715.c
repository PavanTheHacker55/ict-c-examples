#include<stdio.h>
#include<math.h>
int main()
{
    int nmbr,Case=1;
    double a,s,t,u,v;
    while(scanf("%d",&nmbr)==1)
    {
        if(nmbr==0)
            break;
        else if(nmbr==1)
        {
            scanf("%lf%lf%lf",&u,&v,&t);
            s=((u+v)/2)*t;
            a=(v/t)-(u/t);
            printf("Case %d: %0.3lf %0.3lf\n",Case,s,a);
        }
        else if(nmbr==2)
        {
            scanf("%lf%lf%lf",&u,&v,&a);
            s=((v*v)-(u*u))/(2*a);
            t=(v-u)/a;
            printf("Case %d: %0.3lf %0.3lf\n",Case,s,t);
        }
        else if(nmbr==3)
        {
            scanf("%lf%lf%lf",&u,&a,&s);
            v=sqrt((u*u)+(2*a*s));
            t=(2*s)/(u+v);
            printf("Case %d: %0.3lf %0.3lf\n",Case,v,t);
        }
        else if(nmbr==4)
        {
            scanf("%lf%lf%lf",&v,&a,&s);
            u=sqrt((v*v)-(2*a*s));
            t=(v-u)/a;
            printf("Case %d: %0.3lf %0.3lf\n",Case,u,t);
        }
        Case++;
    }
    return 0;
}

