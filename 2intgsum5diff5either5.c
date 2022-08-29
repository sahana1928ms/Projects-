#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the values");
scanf("%d %d",&a,&b);
c=(a==5||b==5||(a+b)==5||(a-b)==5);
printf("c=%d\n",c);
return c;
}
