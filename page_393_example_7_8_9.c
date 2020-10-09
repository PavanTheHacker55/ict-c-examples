#include<stdio.h>
#include<conio.h>
int main() {
    int a;

    // example-7
    for(a=2;a<=15; a=a+2) {
        printf("%d\t ",a);
    }
    printf("\n");

    // example-8
     a=2;
     while(a<=15) {
        printf("%d\t ",a);
        a=a+2;
    }
    printf("\n");

    // example-9
    a=2;
    do {
        printf("%d\t ",a);
        a=a+2;
    } while(a<=15);

    getch();
}
