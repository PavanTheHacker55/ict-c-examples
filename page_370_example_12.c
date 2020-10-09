#include<stdio.h>
#include<conio.h>
int main() {
    int inch;
    float cm;
    printf("Integer value for inches: ");
    scanf ("%d", &inch);
    cm=inch*2.54;
    printf("\nCentimeter=%.2f", cm);
    getch();
}
