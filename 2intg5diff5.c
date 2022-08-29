#include<stdio.h>
int main()
{
int a,b,c,sum;
printf("enter the values");
scanf("%d %d",&a,&b);
c=(a==5||b==5||(a+b)==5||(a-b)==5)?printf("true"):printf("false");
return c;
}
