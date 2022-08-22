#include<stdio.h>
void main()
{
int n,i,c=0,a;
printf("num\n");
scanf("%d",&n);
i=2;
while(i<=100/2)
{
if(i%100==0)
{
c=1;
break;
}
i++;
}
if(c==0)
{
printf("prime\n");
}
else
{
printf("not prime\n");
}
}

