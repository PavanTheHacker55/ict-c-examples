#include<stdio.h>

int main()
{
    long long a,b,diff;
    while(scanf("%lld%lld", &a, &b)==2) {
        diff=(a>=b)?a-b:b-a;
        printf("%lld\n", diff);
    }
    return 0;
}
