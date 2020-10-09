#include<stdio.h>
#include<conio.h>
int main() {
    int a,b,i,flag=0;
    printf("Type the two number:");
    scanf("%d %d",&a,&b);
    for(i=1;i<=a*b && flag==0;i++) {
        if(i%a == 0 && i%b == 0 ) {
            flag++;
            printf("LCM is %d",i);
        }
    }
    return 0;
}
