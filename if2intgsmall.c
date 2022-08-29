#include<stdio.h>
int main()
{
int a,b;
printf("enter the values\n");
scanf("%d\n %d\n",&a,&b);
if(a%5==b%5)
{
 if(a>b)
 printf("return b=%d\n",b);
 if(b>a)
  printf("return a=%d\n",a);
}
return 1;
}
