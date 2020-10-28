#include<stdio.h>
int main()
{
    long long n,d,m,x,y;

    scanf("%lld%lld%lld", &n, &d, &m);

    while(m--) {
        scanf("%lld%lld", &x, &y);
        if(x+y>=d && x+y<=(2*n)-d) {
            if(abs(x-y)<=d) {
                puts("YES");
            }
            else puts("NO");
        }
        else puts("NO");
    }
    return 0;
}
