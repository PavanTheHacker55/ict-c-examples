#include<stdio.h>
int main()
{
    int a[1005],i,j,sum=0,n,t,p;
    char s[105];
    scanf("%d",&t);
    while(t>0)
    {
        t--;
        scanf("%d",&n);
        getchar();
        for(i=1;i<=n;i++)
        {
            gets(s);
            if(s[0]=='L')
            {
                a[i]=-1;
                sum+=a[i];
            }
            else if(s[0]=='R')
            {
                a[i]=1;
                sum+=a[i];
            }
            else
            {
                p=0;
                j=8;
                while(s[j]-48<=9&&s[j]-48>=0)
                {
                    p=p*10;
                    p+=s[j]-48;
                    j++;
                }
                a[i]=a[p];
                sum+=a[i];
            }
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}
