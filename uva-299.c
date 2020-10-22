#include<stdio.h>
int main()
{
    long long int T,n,arr[55],i,j,k,count,temp;
    scanf("%lld",&T);
    while(T--)
    {
        count=0;
        scanf("%lld",&n);
        for(i=0; i<n; i++)
            scanf("%lld",&arr[i]);
        for(i=0; i<n; i++)
        {
            for(j=0; j<n-1; j++)
            {
                if(arr[j]>arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    count++;
                }
            }
        }
        printf("Optimal train swapping takes %lld swaps.\n",count);
    }
    return 0;
}
