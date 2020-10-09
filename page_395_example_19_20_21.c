#include<stdio.h>
#include<conio.h>
int main() {
    int a, s=0;

    // example-19
    for(a=2;a<=100; a=a+2) {
        s=s+a;
    }
    printf("Sum=%d\n",s);

    // example-20
     a=2, s=0;
     while(a<=100) {
        s=s+a;
        a=a+2;
    }
    printf("Sum=%d\n",s);

    // example-21
    a=2, s=0;
    do {
        s=s+a;
        a=a+2;
    } while(a<=100);
    printf("Sum=%d\n",s);

    getch();
}
