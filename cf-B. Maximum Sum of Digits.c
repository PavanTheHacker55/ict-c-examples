#include<stdio.h>

long long S(long long n) {
    long long ans=0;
    while(n) {
        ans+=(n%10);
        n/=10;
    }
    return ans;
}

long long func(long long n) {
    long long ans=0,k=1;
    while(n>10) {
        ans=(ans)+((n%10)*k);
        n/=10;
        k*=10;
    }
    return ans;
}

int main() {
    long long n,m;
    scanf("%lld", &n);
    m=log10(n);
    m=(9*m)+((n/pow(10,m))-1);
    n=func(n)+1;
    printf("%lld\n", S(n)+m);

    return 0;
}
