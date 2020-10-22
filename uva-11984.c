#include<stdio.h>
int main()
{
    int T,i;
    double c,f,C,F;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%lf%lf",&c,&f);
        F=((9*c)/5)+32;
        f=f+F;
        C=(5*(f-32))/9;
        printf("Case %d: %0.2lf\n",i,C);
    }
    return 0;
}
