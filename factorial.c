#include<stdio.h>
int facto(int *a)
{
int facto=1,b;
for(b=*a;b>0;b--)
{
facto*=b;
}
return facto;
}
void main()
{
int number,factorial;
printf("enter the number");
scanf("%d",&number);
factorial=facto(&number);
printf("%d",factorial);
}

