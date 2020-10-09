#include<stdio.h>
#include<conio.h>
int main() {
    int a,b,c;
    printf("Enter 3 integer values:");
    scanf("%d %d %d", &a, &b, &c);
    if( b>a && a>c || c>a && a>b ) {
            printf("%d is middle number",a);
    }
    if( a>b && b>c || c>b && b>a ) {
            printf("%d is middle number",b);
    }
    if( a>c && c>b || b>c && c>a ) {
            printf("%d is middle number",c);
    }
}
