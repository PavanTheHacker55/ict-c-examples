#include<stdio.h>
int main()
{
    double i,j,k=0;
    for(i=0;i<=10;i++)
    {
        for(j=1;j<=3;j++)
        {

            if(i==0||i==5||i==10)
            {
                printf("I=%.0lf J=%.0lf\n",k,j+k);
            }
            else
            {
                printf("I=%.01lf J=%.01lf\n",k,j+k);
            }
        }
        k+=.2;
    }

    return 0;
}
