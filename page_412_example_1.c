#include<stdio.h>
#include<conio.h>
void main()
{
    int j;
    int marks[5]= {11, 23, 35, 42, 36};
    printf("One Dimensional Array Elements\n");
    for(j=0; j<5; j++)
    {
        printf("%d\t",marks[j]);
    }
    printf("\n")  ;
    getch();
}
