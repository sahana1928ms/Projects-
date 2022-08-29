#include<stdio.h>
int swap(),a,b,res1,res2;
int main()
{
res1=swap();
//res2=swap();
printf("res1=%d res2=%d",res1,res2);
}
int swap()
{
int a=10,b=20;
a=a+b;
res2=b=a-b;
res1=a=a-b;
return res1,res2;
}
