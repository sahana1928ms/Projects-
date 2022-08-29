#include<stdio.h>
void main()
{
int min,max,i;
int a[4];
printf("enter the elements in the array" );
for(i=0;i<4;i++)
{
scanf("%d",&a[i]);
}
min=max=a[0];
for(i=1;i<4;i++)
{
if(min>a[i])
{
min=a[i];
}
for(i=1;i<4;i++)
{
if(max<a[i])
{
max=a[i];
}
}
printf("max=%d",max);
printf("min=%d",min);
}
}
