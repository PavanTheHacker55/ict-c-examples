#include<stdio.h>
#include<math.h>
int IsPrime(int n)
{
    int rt=(int)sqrt(n),i;
    for(i=2; i<=rt; i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int func(char ch)
{
    if(ch>=65 && ch<=90)
        return ch-38;
    else if(ch>=97 && ch<=122)
        return ch-96;
}
int main()
{
    char str[21];
    int sum,i;
    while(scanf("%s",str)!=EOF)
    {
        sum=0;
        for(i=0; str[i]!='\0'; i++)
        {
            sum+=func(str[i]);
        }
        i=IsPrime(sum);
        if(i==1)
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }
    return 0;
}
