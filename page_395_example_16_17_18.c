#include<stdio.h>
#include<conio.h>
int main() {
    int a, s=0;

    // example-16
    for(a=1;a<=100; a=a+2) {
        s=s+a;
    }
    printf("Sum=%d\n",s);

    // example-17
     a=1, s=0;
     while(a<=100) {
        s=s+a;
        a=a+2;
    }
    printf("Sum=%d\n",s);

    // example-18
    a=1, s=0;
    do {
        s=s+a;
        a=a+2;
    } while(a<=100);
    printf("Sum=%d\n",s);

    getch();
}
