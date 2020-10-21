#include<stdio.h>
int main()
{
    int i,b1,b2,j;
    char a[18];
    while(scanf("%s",a)!=EOF)
    {
        getchar();
        b1=0;
        b2=0;
        for(i=0,j=0;j<9;i++)
        {
            if(a[i]!='.')
            {
                b1+=(a[i]-48)*(j+1);
                b2+=(a[i]-48)*(9-j);
                j++;
            }
        }
        b1=b1%11;
        b2=b2%11;
        if(b1==10)
        {
            b1=0;
        }
        if(b2==10)
        {
            b2=0;
        }
        if(b1+48==a[12]&&b2+48==a[13])
        {
            printf("CPF valido\n");
        }
        else
        {
            printf("CPF invalido\n");
        }
    }
    return 0;
}
