#include<stdio.h>
#include<conio.h>
int main() {
    int a;

    // example-4
    for(a=1;a<=15; a=a+2) {
        printf("%d\t ",a);
    }
    printf("\n");

    // example-5
     a=1;
     while(a<=15) {
        printf("%d\t ",a);
        a=a+2;
    }
    printf("\n");

    // example-6
    a=1;
    do {
        printf("%d\t ",a);
        a=a+2;
    } while(a<=15);

    getch();
}
