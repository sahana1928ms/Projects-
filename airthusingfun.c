#include<stdio.h>
int sum(),sub(),mul(),div(),res1,res2,res3,res4;
int main()
{
sum();
sub();
mul();
div();
}
int sum(){
int a=2,b=3;
res1=a+b;
printf("%d\n",res1);
}
int sub()
{
int a=2,b=3;
res2=a-b;
printf("%d\n",res2);
}


int mul()
{
int a=2,b=3;
res3=a*b;
printf("%d\n",res3);
}
int div()
{
int a=2,b=3;
res4=a/b;
printf("%d\n",res4);
}
