#include<stdio.h>
int main()
{
    int a;
    for( ; ; )
    {
        printf("Enter the positive number: ");
        scanf("%d",&a);
        if(a<0) continue;
        else break;
    }
    printf("\nYou have entered %d",a);
}
