#include<stdio.h>

int main()
{
    int i, p, n, numbers[10];
    printf("Type ten numbers: ");
    for (i=0; i<10; i++) {
        scanf("%d", &numbers[i]);
    }
    p=0, n=0;
    for(int i=0; i<10; ++i) {
        if(numbers[i]>=0) p++;
        else n++;
    }
    printf("Total positive numbers = %d\n", p);
    printf("Total negative numbers = %d\n", n);
    return 0;
}
