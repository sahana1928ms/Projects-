#include<stdio.h>
int main()
{
int a,b,c,r1,r2;
printf("enter the value");
scanf("%d %d",&a,&b);
r1=a%5;
r2=b%5;
c=(r1==r2)?((a>b)?b:(b>a)?a:printf("smaller=%d")):printf("return 1");
return c;

}
