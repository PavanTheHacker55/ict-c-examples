#include<stdio.h>
#include<conio.h>
int main() {
    int a,b,c;
    printf("Enter 3 integer values:");
    scanf("%d  %d  %d", &a, &b, &c);
    if(a>b) {
        if(b>c) {
            printf("%d is middle one",b);
        } else if(c>a) {
            printf("%d is middle one",a);
        } else {
            printf("%d is middle one",c);
        }
    } else {
        if(b<c) {
            printf("%d is middle one",b);
        } else if(c<a) {
            printf("%d is middle one",a);
        } else {
            printf("%d is middle one",c);
        }
    }
}
