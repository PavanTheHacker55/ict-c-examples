#include<stdio.h>
int main()
{
    int N,arr[1010],ans,i,j=1,count;
    while(scanf("%d",&N)==1 && N!=0)
    {
        count=0;
        for(i=0; i<N; i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]==0)
                count++;
        }
        ans=N-2*count;
        printf("Case %d: %d\n",j,ans);
        j++;
    }
    return 0;
}
