#include <stdio.h>

int main() {

     int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
        if(c>=b)
            printf(":)\n");
        else
            if(a-b>b-c)
                printf(":)\n");
            else
                printf(":(\n");
    else
        if(c<=b)
            printf(":(\n");
        else
            if(b-a>c-b)
                printf(":(\n");
            else
                printf(":)\n");

    return 0;
}

