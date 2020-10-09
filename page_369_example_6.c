#include<stdio.h>
#include<conio.h>
int main() {
    int c, f;
    printf("Enter Ferhenheight temperature: ");
    scanf("%d",&f);
    c=5*(f-32)/9;
    printf("Celcious temperature:%d",c);
    getch();
}
