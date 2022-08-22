#include<stdio.h>
void main()
{
int n,c=0,e,j=1;
printf("enter number of elements");
scanf("%d",&n);
int a[n],b[n];
printf("enter %d elements for 1st array \n",n);
for(int i=0;i<n;i++)
{
scanf("%d",&e);
a[i]=e;
}
for(int i=0,j=i+1;i<n,j<n;i++,j++)
{
if(a[i]!=a[j])
{
printf("\n %d",a[i]);
}
}
}
