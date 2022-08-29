#include<stdio.h>
int sum(),sub(),mul(),div(),res1,res2,res3,res4;
int main()
{
res1=sum();
printf("%d\n",res1);
res2=sub();
printf("%d\n",res2);
res3=mul();
printf("%d\n,res3");
res4=div();
printf("%d\n",res4);
}
int sum()
{
int a=2,b=3;
res1=a+b;
return res1;
}
int sub()
{
int a=2,b=3;
res2=a-b;
return res2;
}
int mul()
{
int a=2,b=3;
res3=a*b;
return res3;
}
int div()
{
int a=2,b=3;
res4=a/b;
return res4;
}
