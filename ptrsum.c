#include<stdio.h>
int main()
{
int *p,*q,sum,a,b,d,e;
printf("enter the numbers\n");
scanf("%d\n %d\n",&a,&b);
p=&a;
q=&b;
sum=*p+*q;
printf("sum=%d\n",sum);
}

