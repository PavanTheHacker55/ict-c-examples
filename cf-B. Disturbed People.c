#include<stdio.h>

int main()
{
    long long n,arr[110]= {0}, arr1[110]= {0}, c=0,ans;

    scanf("%lld", &n);

    for(int i=0; i<n; ++i) scanf("%lld", &arr[i]);

    for(int i=1; i<n-1; ++i)
    {
        if(arr[i-1] && arr[i+1] && arr[i]==0)
        {
            arr1[c++] = i;
        }
    }
    ans=c;

    long long k=1;

    for(int i=0; i<c; i+=k)
    {
        if(arr1[i+1]==arr1[i]+2) --ans,k=2;
        else k=1;
    }

    printf("%lld\n", ans);

    return 0;
}
