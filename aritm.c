#include<stdio.h>
int sum(),sub(),mul(),div(),add,res;
int main()
{
sum();
sub();
mul();
div();
}
int sum()
{
int a=3,b=5;
add=a+b;
printf("%d\n",add);
}
int sub()
{
int a=7,b=4;
res=a-b;
printf("%d\n",res);
}
int mul()
{
int a=4,b=2;
res=a*b;
printf("%d\n",res);
}
int div()
{
int a=4,b=2;
res=a/b;
printf("%d\n",res);
}
