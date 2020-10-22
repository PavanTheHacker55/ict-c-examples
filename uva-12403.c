#include<stdio.h>
int func(char ch)
{
    if(ch=='0')
        return 0;
    else if(ch=='1')
        return 1;
    else if(ch=='2')
        return 2;
    else if(ch=='3')
        return 3;
    else if(ch=='4')
        return 4;
    else if(ch=='5')
        return 5;
    else if(ch=='6')
        return 6;
    else if(ch=='7')
        return 7;
    else if(ch=='8')
        return 8;
    else if(ch=='9')
        return 9;
}
int main()
{
    long long int T,sum=0,c,i,nmbr;
    char ch[18];
    scanf("%lld",&T);
    getchar();
    while(T--)
    {
        gets(ch);
        if(ch[0]=='d' && ch[1]=='o' && ch[2]=='n' && ch[3]=='a' && ch[4]=='t' && ch[5]=='e')
        {
            nmbr=0;
            for(i=7; ch[i]!='\0'; i++)
            {
                c=func(ch[i]);
                nmbr=c+10*nmbr;
            }
            sum+=nmbr;
        }
        else if(ch[0]=='r' && ch[1]=='e' && ch[2]=='p' && ch[3]=='o' && ch[4]=='r' && ch[5]=='t')
            printf("%lld\n",sum);
    }
    return 0;
}
