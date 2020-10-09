#include<stdio.h>
#include<conio.h>
int main() {
    int a;

    // example-1
    for(a=1;a<=10; a++) {
        printf("%d\t ",a);
    }
    printf("\n");

    // example-2
     a=1;
     while(a<=10) {
        printf("%d\t ",a);
        a++;
    }
    printf("\n");

    // example-3
    a=1;
    do {
        printf("%d\t ",a);
        a++;
    } while(a<=10);

    getch();
}
