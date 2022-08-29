#include<stdio.h>
void main()
{
char a[10]="string";
int i,count=0,length=0;
printf("character is %s\n",a);
while(a[i]!=NULL)
{
    i++;
count++;
}
printf("length is=%d\n",count);
}
