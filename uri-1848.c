#include<stdio.h>
int main()
{
    int sum=0,i=0,j,a[4];
    char s[10];
    while(gets(s))
    {
        if(s[2]=='*')
        {
            sum+=1;
        }
        if(s[1]=='*')
        {
            sum+=2;
        }
        if(s[0]=='*')
        {
            sum+=4;
        }
        if(s[0]=='c')
        {
            a[i]=sum;
            i++;
            sum=0;
        }
        if(i==3)
        {
            for(j=0;j<i;j++)
            {
                printf("%d\n",a[j]);
            }
            break;
        }
    }

    return 0;
}
