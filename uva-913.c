#include<stdio.h>
int main()
{
    long long int N,m,s;
    while(scanf("%lld",&N)==1)
    {
        N+=1;
        m=N/2;
        s=3*(N*m-3);
        printf("%lld\n",s);
    }
    return 0;
}
