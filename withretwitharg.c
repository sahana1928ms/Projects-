#include<stdio.h>
int sq(int),res;
int main()
{
int a;
res=sq(a);
printf("%d",res);
}
int sq(int a)
{
a=3;
res=a*a;
return res;
}
