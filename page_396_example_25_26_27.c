#include<stdio.h>
#include<conio.h>
int main() {
    int a,s=0,n;
    printf("Value of n: ");
    scanf("%d",&n);

    // example-25
    for(a=1;a<=n; a=a+1) {
        s=s+a*a;
    }
    printf("Sum=%d\n",s);

    // example-26
     a=1, s=0;
     while(a<=n) {
        s=s+a*a;
        a++;
    }
    printf("Sum=%d\n",s);

    // example-27
    a=1, s=0;
    do {
        s=s+a*a;
        a++;
    } while(a<=n);
    printf("Sum=%d\n",s);

    getch();
}
