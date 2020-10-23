
#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,la,lb,k,p,c,t=0;
    char a[15],b[50];
    while(gets(a))
    {
        gets(b);
        la=strlen(a);
        lb=strlen(b);
        c=0;
        t++;
        for(i=0;i<lb;i++)
        {
            k=0;
            if(b[i]==a[0])
            {
                p=i;
                for(j=0;j<la;j++)
                {
                    if(a[j]!=b[i+j])
                    {
                        k=1;
                        break;
                    }
                }
                if(k==0)
                {
                    c++;
                }
                i+=j-1;
            }
        }
        if(c!=0)
        {
            printf("Caso #%d:\nQtd.Subsequencias: %d\nPos: %d\n\n",t,c,p+1);
        }
        else
        {
            printf("Caso #%d:\nNao existe subsequencia\n\n",t);
        }
    }
    return 0;
}
