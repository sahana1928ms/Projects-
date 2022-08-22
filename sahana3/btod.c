#include<stdio.h>
void main()
{
int n,bin_num,deci_num=0,base=1,rem;
printf("binary number");
scanf("%d",&n);
while(n>0)
{
rem=n%10;
deci_num=deci_num+rem*base;
n=n/10;
base=base*2;
}
printf("binary number is %d\n",bin_num);
printf("decimal is %d\n",deci_num);
}
