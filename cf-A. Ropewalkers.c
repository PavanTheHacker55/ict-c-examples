#include<stdio.h>

long long cmpfunc (const void * a, const void * b) {
   return ( *(long long*)a - *(long long*)b );
}

int main()
{
    long long d, ans = 0;
    long long pos[3];
    scanf("%lld%lld%lld%lld", &pos[0], &pos[1], &pos[2], &d);

    qsort(pos, 3, sizeof(long long), cmpfunc);  // If you are new in programming then it's not recommended. Rather you should learn about various types of sorting algorithms.

    if(pos[1]-pos[0]<d) {
        ans += d-(pos[1]-pos[0]);
        pos[0] -= d-(pos[1]-pos[0]);
    }
    if(pos[2]-pos[1]<d) ans += d-(pos[2]-pos[1]);
    printf("%lld\n", ans);
    return 0;
}
