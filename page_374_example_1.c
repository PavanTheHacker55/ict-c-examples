 #include<stdio.h>
 int main() {
     int a=2,b=3,c=0;
     int result1,result2,result3;
     result1=((a&&b)||c);
     result2=((a||b)&&c);
     printf("Result1=%d",result1);
     printf("\nResult2=%d",result2);
}
