#include<stdio.h>
int main()
{
    long long int M,N,c;
    while(scanf("%lld%lld",&M,&N)==2)
    {
        c=M*N-1;
        printf("%lld\n",c);
    }
    return 0;
}
