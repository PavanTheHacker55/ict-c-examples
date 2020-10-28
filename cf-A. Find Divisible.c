#include<stdio.h>

int main()
{
    long long t;
    scanf("%lld", &t);
    while(t--) {
        long long l,r;
        scanf("%lld%lld", &l, &r);
        printf("%lld %lld\n", l, r-(r%l));
    }

    return 0;
}
