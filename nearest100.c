#include<stdio.h>
int main()
{
int a,b,a1,b1,num=100;
printf("enter the number\n");
scanf("%d %d",&a,&b);
a1=100-a;
b1=100-b;
if(a1>b1)
{
printf("nearest number=%d\n",a);
}
else if(b1>a1)
{
printf("nearest number=%d\n",b);
}
if(a1==b1)
{
printf("equal");
}
return 0;
}
