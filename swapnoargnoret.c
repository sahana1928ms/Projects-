#include<stdio.h>
int swap(),a,b;
int main()
{
swap();
}
int swap()
{
int a=10,b=20;
a=a+b;
b=a-b;
a=a-b;
printf("a=%d b=%d",a,b);
}
