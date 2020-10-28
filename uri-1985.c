#include<stdio.h>
int main()
{
    double t,p,i,n,s1=0,s2=0,s3=0,s4=0,s5=0,sum;
    scanf("%lf",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lf%lf",&p,&n);
        if(p==1001)
        {
            s1+=n*1.5;
        }
        if(p==1002)
        {
            s2+=n*2.5;
        }
        if(p==1003)
        {
            s3+=n*3.5;
        }
        if(p==1004)
        {
            s4+=n*4.5;
        }
        if(p==1005)
        {
            s5+=n*5.5;
        }
    }
    sum=s1+s2+s3+s4+s5;
    printf("%.2lf\n",sum);
    return 0;
}
