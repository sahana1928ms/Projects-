#include<stdio.h>
void main()
{
int i,j,n,sum;
printf("enter the value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{


if(i%2!=0)
{
    printf("%d",i);
    sum=sum+i;

}
}
printf("sum=%d",sum);
}
