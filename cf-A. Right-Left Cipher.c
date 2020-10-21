#include<stdio.h>

int main()
{
    char inp[1000];
    gets(inp);
    int sz=strlen(inp);
    int k=(sz/2);
    if(sz%2==0) --k;
    int K=k+1;
    for(int i=0; inp[i]; ++i) {
        if(i%2==0) printf("%c",inp[k--]);
        else printf("%c",inp[K++]);
    }

    puts("");
    return 0;
}
