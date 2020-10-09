#include<stdio.h>
#include<conio.h>
int main() {
    int a,i,n,j;
    printf("First term: ");
    scanf("%d",&a);
    printf("Increment number: ");
    scanf("%d",&i);
    printf("Last term: ");
    scanf("%d",&n);
    printf("Series: ");

    // example-28
    for(j=a;j<=n; j=j+i) {
        printf("%d\t ",j);
    }
    printf("\n");

    // example-29
     j=a;
     while(j<=n) {
        printf("%d\t ",j);
        j=j+i;
    }
    printf("\n");

    // example-30
    j=a;
    do {
        printf("%d\t ",j);
        j=j+i;
    } while(j<=n);
    printf("\n");

    getch();
}
