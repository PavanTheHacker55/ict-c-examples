#include<stdio.h>
int main()
{
    int N,arr[12],i,u_flag,l_flag,count;
    scanf("%d",&N);
    printf("Lumberjacks:\n");
    while(N--)
    {
        u_flag=l_flag=count=0;
        for(i=0; i<10; i++)
        {
            scanf("%d",&arr[i]);
            if(i==1)
            {
                if(arr[i]>arr[i-1])
                    u_flag++;
                else
                    l_flag++;
            }
            if(i>1)
            {
                if((u_flag==1 && arr[i]<arr[i-1]) || (l_flag==1 && arr[i]>arr[i-1]))
                    count++;
            }
        }
        if(count==0)
            printf("Ordered\n");
        else
            printf("Unordered\n");
    }
    return 0;
}
