#include<stdio.h>
//int a=10,b=20; predefined
void swap(int *,int *);
int a,b;
int main()
{
printf("enter the values");//userdefined

scanf("%d %d",&a,&b);
swap(&a,&b);
printf("a=%d b=%d",a,b);
}
void swap(int *a,int *b)
{
*a=*a+*b;
*b=*a-*b;
*a=*a-*b;
}
