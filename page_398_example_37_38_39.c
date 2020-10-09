#include<stdio.h>
#include<conio.h>
int main() {
    int l, s, i, gcd, r;
    printf("Enter large value: ");
    scanf("%d", &l);
    printf("Enter small value: ");
    scanf("%d", &s);
    int L=l, S=s;
    // example-37
    for(i=1; i<=l || i<=s; ++i) {
        if(l%i==0 && s%i==0)
            gcd=i;
    }
    printf("GCD=%d\n", gcd);

    // example-38
    l=L, s=S;
    while(l%s!=0) {
        r = l%s;
        l = s;
        s = r;
    }
    printf("GCD=%d\n", s);

    // example-39
    l=L, s=S;
    do{
        r = l %s;
        l = s;
        s = r;
    } while(l%s!=0);
    printf("GCD=%d\n", s);

    getch();
}
