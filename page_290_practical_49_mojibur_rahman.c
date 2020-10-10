#include<stdio.h>
int square(int);

int main()
{
    int x, n;
    printf("Enter total number (maximum 500) of value you want to square: ");
    scanf("%d", &n);
    for(x=1; x<=n; x++) {
        printf("%d ", square(x));
    }
    printf("\n");
    return 0;
}

int square(int num) {
    return num * num;
}
