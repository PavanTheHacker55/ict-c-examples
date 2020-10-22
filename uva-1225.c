#include<stdio.h>
int main()
{
    int N,T,n,i,j;
    scanf("%d",&T);
    for(i=0; i<T; i++)
    {
        scanf("%d",&N);
        int arr[10]= {0};
        while(N)
        {
            n=N;
            while(n)
            {
                j=n%10;
                arr[j]++;
                n/=10;
            }
            N--;
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);
    }
    return 0;
}
