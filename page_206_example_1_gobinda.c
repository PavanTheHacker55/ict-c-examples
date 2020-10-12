#include <stdio.h>
#include<conio.h>
#define Max 5
int main ()
{
    int  i, Roll[Max] ;
    float Mark[Max] ;
    for (i = 0; i<Max; i++)
    {
        printf("\nEnter Roll [%d]  & Mark [%d]:", i, i) ;
        scanf("%d%f", &Roll[i], &Mark[i]);
    }
    for (i = 0; i <Max; i++)
        printf("\nRoll [%d] = %d   Mark [%d] = %2f", i, Roll [i], i, Mark [i]) ;
    getch () ;
}
