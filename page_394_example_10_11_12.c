#include<stdio.h>
#include<conio.h>
int main() {
    int a, n;
    printf("Value of n: ");
    scanf("%d",&n);

    // example-10
    for(a=1;a<=n; a++) {
        printf("%d\t ",a);
    }
    printf("\n");

    // example-11
     a=1;
     while(a<=n) {
        printf("%d\t ",a);
        a++;
    }
    printf("\n");

    // example-12
    a=1;
    do {
        printf("%d\t ",a);
        a++;
    } while(a<=n);

    getch();
}
