#include<stdio.h>

int main()
{
    int i, n, numbers[100];
    printf("Enter number of array size: ");
    scanf("%d", &n);
    printf("Now enter value of array elements: ");
    for(i-0; i<n; i++) {
        scanf("%d", &numbers[i]);
    }
    printf("Show the numbers in reverse order. \n");
    for(i=n-1; i>=0; --i)
        printf("%d ", numbers[i]);
    return 0;
}
