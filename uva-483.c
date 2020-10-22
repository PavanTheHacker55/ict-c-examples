#include<stdio.h>
int main()
{
    char ch[1000],temp;
    long long int i,j,k,l;
    long long int I=0,F=0;
    while(gets(ch)) {
        if(ch==EOF)
            break;
        for(i=0; ch[i]!='\0'; i++) {
            if(ch[i-1]==' ' || i==0)
                I=i;
            else if(ch[i]==' ')
                continue;
            else if(ch[i+1]==' ' || ch[i+1]=='\0') {
                F=i;
                for(j=I,k=0; j<=(I+F)/2; j++,k++) {
                    temp=ch[F-k];
                    ch[F-k]=ch[j];
                    ch[j]=temp;
                }
            }
        }
        printf("%s\n",ch);
    }
    return 0;
}
