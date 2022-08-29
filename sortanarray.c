#include<stdio.h>
void main()
{
int i,j,n,a,num[30];
printf("enter the number of elements\n");
scanf("%d",&n);
printf("enter the elements\t");
for(i=0;i<n;i++)
scanf("%d",&num[i]);
for(i=0;i<n;i++)
for(j=i+1;j<n;j++)
{
if(num[i]>num[j])
{
a=num[i];
num[i]=num[j];
num[j]=a;
}
}
for(i=0;i<n;i++)
    printf("%d\n",num[i]);
}
