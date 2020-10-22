#include<stdio.h>
int main()
{
    long long int N,P,p,add,rev,count;
    scanf("%lld",&N);
    while(N--)
    {
        count=0;
        scanf("%lld",&P);
        while(1)
        {
            p=P;
            rev=0;
            while(p!=0)
            {
                rev=rev*10+(p%10);
                p/=10;
            }
            if(P==rev)
            {
                printf("%lld %lld\n",count,P);
                break;
            }
            else
            {
                add=P+rev;
                P=add;
                count++;
            }
        }
    }
    return 0;
}
