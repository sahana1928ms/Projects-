#include<stdio.h>
int main()
{
int a,b,add,res;
printf("enter a and b values");
scanf("%d %d",&a,&b);
add=a+b;
if(a==b)
{
res=add*3;
printf("res=%d\n",res);
}
else
{
printf("add=%d\n",add);
}
return (res);
}
