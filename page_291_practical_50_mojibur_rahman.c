#include<stdio.h>
long fact(long n);

int main()
{
    long num, f;
    printf("Enter a number: ");
    scanf("%ld", &num);
    f = fact(num);
    printf("The factorial is %ld\n", f);
    return 0;
}

long fact(long n) {
    if(n==0)
        return 1;
    return n * fact(n-1);
}
