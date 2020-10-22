#include<stdio.h>
int main()
{
    long long int n;
    while(scanf("%lld",&n)==1) {
        long long int ans=0,N;
        n=(n/2)+1;
        if(n%2)
            N=(n+1)/2;
        else {
            N=(n+1);
            n/=2;
        }
        printf("%lld\n",N*n);
    }

    return 0;
}
