#include<stdio.h>
int c(),a,b,res;
int main()
{
c();
}
int c()
{
printf("enter the numbers");
scanf("%d\n %d\n",&a,&b);
res=(a==5||b==5||(a+b)==5||(a-b)==5);
return res;
}

