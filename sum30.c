#include<stdio.h>
int main()
{
int a,b,c,d,sum;
printf("enter the values");
scanf("%d %d",&a,&b);
sum=a+b;
c=((sum>=10&&sum<=20)?printf("30"):printf("sum=%d\n",sum));
}
/*if (sum>=10&&sum<=20)
{
d=printf("30");
}
else
{
printf("sum=%d\n",sum);
}
return 30;
}*/


