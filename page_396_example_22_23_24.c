#include<stdio.h>
#include<conio.h>
int main() {
    int a,s=0,n;
    printf("Value of n: ");
    scanf("%d",&n);

    // example-22
    for(a=1;a<=n; a=a+1) {
        s=s+a;
    }
    printf("Sum=%d\n",s);

    // example-23
     a=1, s=0;
     while(a<=n) {
        s=s+a;
        a++;
    }
    printf("Sum=%d\n",s);

    // example-24
    a=1, s=0;
    do {
        s=s+a;
        a++;
    } while(a<=n);
    printf("Sum=%d\n",s);

    getch();
}
