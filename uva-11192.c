#include<stdio.h>
int main()
{
    char ch[101],ch_temp;
    int G,i,j,k,l,m,l1,len;
    while(scanf("%d",&G)==1 && G!=0)
    {
        getchar();
        gets(ch);
        for(len=0; ch[len]!='\0'; len++);
        m=len/G;
        k=0;
        for(i=0; i<G; i++)
        {
            l=l1=k+m-1;
            for(j=k; j<=(k+l1)/2; j++)
            {
                ch_temp=ch[j];
                ch[j]=ch[l];
                ch[l]=ch_temp;
                l--;
            }
            k=l1+1;
        }
        printf("%s\n",ch);
    }
    return 0;
}
