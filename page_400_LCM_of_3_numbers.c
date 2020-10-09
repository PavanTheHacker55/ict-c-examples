#include<stdio.h>
#include<conio.h>
int main() {
    int a,b,c,i,flag=0;
    printf("Type the three number:");
    scanf("%d %d %d",&a,&b,&c);
    for(i=1;i<=a*b*c && flag==0;i++) {
        if(i%a == 0 && i%b == 0 && i%c == 0) {
            flag++;
            printf("LCM is %d",i);
        }
    }
    getch();
}
