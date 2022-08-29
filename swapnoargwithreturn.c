#include<stdio.h>
int swap(),a,b;
int main()
{
swap();
printf("%d %d", a,b);
}
int swap()
{
printf("enter the nunebrs");
scanf("%d %d",&a,&b);
a=a+b;
a=a-b;
b=a-b;
return a;

}
