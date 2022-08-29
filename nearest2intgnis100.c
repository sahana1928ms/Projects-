#include<stdio.h>
int main()
{
int a,b,n=100;
printf("enter the number\n");
scanf("%d %d",&a,&b);
if(a>b)
{
printf("nearest=%d\n",a);
}
 else if(a==b)
{
printf("equal");
}
else
    printf("nearest=%d",b);
return 0;
}
