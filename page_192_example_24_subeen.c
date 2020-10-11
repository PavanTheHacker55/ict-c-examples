#include <stdio.h>
#include <string.h>
int main ()
{
    char sl [80], s2 [80];
    int value;
    scanf("%s %s", sl, s2);
    value= strcmp(sl, s2);
    if (value == 0)
    {
        printf("%s and %s are equal.\n", sl, s2);
    }
    else if (value> 0)
    {
        printf("%s is greater than %s.\n", sl, s2);
    }
    else
    {
        printf("%s is smaller than %s.\n", sl, s2);
    }
    return 0;
}
