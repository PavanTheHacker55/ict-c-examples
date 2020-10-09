#include <stdio.h>
int main() {
    int num1, num2,num3, i, hcf;
    printf("Enter first number  integers: ");
    scanf("%d", &num1);
    printf("Enter second  integers: ");
    scanf("%d", &num2);
    printf("Enter third  integers: ");
    scanf("%d",&num3);
    for(i=1; i<=num1 || i<=num2 ||i<=num3; ++i) {
        if(num1%i==0 && num2%i==0 && num3%i==0)
            hcf=i;
    }
    printf("H.C.F of %d ,%d and %d is %d",num1,num2,num3,hcf);
    return 0;
}
