#include<stdio.h>
int main()
{
int n,i,c=0;
printf("enter the number\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
c++;
}
}
if(c==1)
{
printf("n is a prime number");
}
else
{
printf("n is not prime number");
}
return 0;
}
