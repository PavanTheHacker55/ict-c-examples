#include<stdio.h>
#include<conio.h>
int main() {
    int a, s=0;

    // example-13
    for(a=1;a<=100; a=a+1) {
        s=s+a;
    }
    printf("Sum=%d\n",s);

    // example-14
     a=1, s=0;
     while(a<=100) {
        s=s+a;
        a++;
    }
    printf("Sum=%d\n",s);

    // example-15
    a=1, s=0;
    do {
        s=s+a;
        a++;
    } while(a<=100);
    printf("Sum=%d\n",s);

    getch();
}
