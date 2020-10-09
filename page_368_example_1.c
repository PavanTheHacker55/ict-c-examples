#include<stdio.h>
#include<conio.h> // unnecessary header file for codeblocks
main()  {
    int a, b, sum;
    printf("Type the first number: ");
    scanf("%d",&a);
    printf("Type the second number: ");
    scanf("%d",&b);
    sum = a+b;
    printf("Summation = %d",sum);
    getch();
}

//Output:
//    2
//    3
//    Summation = 5
