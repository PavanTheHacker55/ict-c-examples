#include<stdio.h>
#include<conio.h>
int main() {
    int n, a;
    long f=1;
    printf("Enter a number: ");
    scanf("%d", &n);

    // example-34
    for(a=1;a<=n; a=a+1) {
        f=f*a;
    }
    printf("Factorial is %ld\n", f);

    // example-35
     a=1, f=1;
     while(a<=n) {
        f=f*a;
        a++;
    }
    printf("Factorial is %ld\n", f);

    // example-36
    a=1, f=1;
    do {
        f=f*a;
        a++;
    } while(a<=n);
    printf("Factorial is %ld\n", f);

    getch();
}
