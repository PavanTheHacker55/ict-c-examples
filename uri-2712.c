#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,l,k;
    char s[100];
    scanf("%d",&t);
    getchar();
    for(i=0; i<t; i++)
    {
        gets(s);
        l=strlen(s);
        k=0;
        if(l!=8)
        {
            printf("FAILURE\n");
            k=1;
        }
        else if(s[3]!='-')
        {
            printf("FAILURE\n");
            k=1;
        }
        else
        {
            for(j=0; j<3; j++)
            {
                if(s[j]<'A'||s[j]>'Z')
                {
                    printf("FAILURE\n");
                    k=1;
                    break;
                }
            }
            for(j=4; j<l; j++)
            {
                if(s[j]<'0'||s[j]>'9')
                {
                    printf("FAILURE\n");
                    k=1;
                    break;
                }
            }
        }
        if(k==0)
        {


            if(s[7]=='1'||s[7]=='2')
            {
                printf("MONDAY\n");
            }
            else if(s[7]=='3'||s[7]=='4')
            {
                printf("TUESDAY\n");
            }
            else if(s[7]=='5'||s[7]=='6')
            {
                printf("WEDNESDAY\n");
            }
            else if(s[7]=='7'||s[7]=='8')
            {
                printf("THURSDAY\n");
            }
            else if(s[7]=='9'||s[7]=='0')
            {
                printf("FRIDAY\n");
            }
        }
    }
    return 0;
}
