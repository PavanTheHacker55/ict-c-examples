#include<stdio.h>

int main()
{
    int x;
    for(x=1; x<=10; x++) {
        if(x==4) continue;
        printf("%d ", x);
    }
    return 0;
}
