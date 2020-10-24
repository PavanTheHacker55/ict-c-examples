#include<stdio.h>
int main()
{
    int i,j;
    double a[12][12],n,sum=0;
    char ch;
    scanf("%lf %c",&n,&ch);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&a[i][j]);
            if(j==n)
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
                printf("%.1lf\n",sum/12);
                break;
        default :
                break;

    }
    return 0;
}
