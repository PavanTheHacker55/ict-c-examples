#include<stdio.h>

int main()
{
    int marks;
    printf("Please enter your mark: ");
    scanf("%d", &marks);
    if(marks>=40)
        printf("You've passed in the subject.\n");
    else
        printf("You've failed in the subject.\n");
    return 0;
}
