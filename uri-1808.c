#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,sum=0,c=0;
    float a;
    char s[1005];
    scanf("%s",s);
    l=strlen(s);
    for(i=l-1;i>=0;i--)
    {
        if(s[i]=='0')
        {
            sum+=10;
            c++;
            i--;
        }
        else
        {
            sum+=s[i]-48;
            c++;
        }
    }
    a=(float)sum/c;
    printf("%0.2f\n",a);
    return 0;
}
