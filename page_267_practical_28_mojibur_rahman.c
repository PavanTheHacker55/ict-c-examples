#include<stdio.h>

int main()
{
    int i, n, prod;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1; i<=10; ++i) {
        prod = n*i;
        printf("%d x %d = %d\n", n, i, prod);
    }
    return 0;
}
