#include<stdio.h>
int function(char ch1,char ch2)
{
    int difference1=0;
    difference1=ch1-ch2;
    if(difference1<0)
        difference1*=-1;
    if(difference1>5)
        difference1=10-difference1;
    return difference1;
}
int main()
{
    int T,n,i,Case,steps;
    char lock1[101],lock2[101];
    scanf("%d",&T);
    for(Case=1; Case<=T; Case++)
    {
        steps=0;
        scanf("%d",&n);
        getchar();
        scanf("%s %s",lock1,lock2);
        for(i=n-1; i>=0; i--)
            steps+=function(lock1[i],lock2[i]);
        printf("Case %d: %d\n",Case,steps);
    }
    return 0;
}
