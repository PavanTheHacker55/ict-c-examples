#include<stdio.h>
int main()
{
    int i,j,k;
    double a[12][12],sum=0;
    char ch;
    scanf("%c",&ch);
    for(i=0,k=11; i<12; i++,k--)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&a[i][j]);
            if(j<i&&j>k)
            {
                sum+=a[i][j];
            }
        }
    }
    switch(ch)
    {
        case 'S':
                printf("%.1lf\n",sum);
                break;
        case 'M':
                printf("%.1lf\n",sum/30);
                break;
        default :
                break;

    }
    return 0;
}
