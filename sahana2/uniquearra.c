#include<stdio.h>
int main()
{
int n,e,c=0,j=1;
printf("enter the number of elements");
scanf("%d",&n);
int a[n],b[n];
printf("enter the elements of 1st array",n);
for(int i=0;i<n;i++)
{
scanf("%d",&e);
a[i]=e;
}
for(int i=0,j=i+1;i<n,j<n;i++,j++)
{
if(a[i]!=a[j])
{
printf("%d",a[i]);
}
}
}
