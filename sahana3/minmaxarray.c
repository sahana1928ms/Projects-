#include<stdio.h>
void main()
{
int a[4]={1,2,3,4},i,max,min;
max=min=a[0];
for(i=0;i<4;i++)
{
if(min>a[i])
{
min=a[i];
}
}
for(i=0;i<4;i++)
{
if(max<a[i])
{
max=a[i];
}
}
printf("%d %d",max,min);
}
