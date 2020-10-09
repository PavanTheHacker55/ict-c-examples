#include<stdio.h>
#include<conio.h>
void main ( )
{
    int i, j;
    int marks[3][4]= {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    printf("Two Dimensional Array Elements\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d\t",marks[i][j]);
        }
        printf("\n");
    }
    getch ( );
}
