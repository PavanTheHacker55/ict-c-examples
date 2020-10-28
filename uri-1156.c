#include<stdio.h>
int main()
{
    int i,j;
    double S=0;
    for(i=1,j=1;i<=39;i+=2,j*=2)
    {
        S=S+(double)i/j;
    }
    printf("%.2lf\n",S);
    return 0;

}
