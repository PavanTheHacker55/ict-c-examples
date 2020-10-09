#include <stdio.h>
#include <conio.h>
int main() {
    int x,y,a;
    printf("Enter the first number: ");
    scanf("%d",&x);
    printf("Enter the second number: ");
    scanf("%d",&y);
    a=(x>y)?x:y;
    printf("Maximum number:%d",a);
    getch();
}
