#include<stdio.h>
void main()
{
int a[6]={1,2,3,4,2,5},i,j,count;
for(i=0;i<6;i++)
{
for(j=i+1;j<6;j++)
{
a[i]=a[j];
}
count++;
}

printf("a[j]=%d",a[j]);
}
