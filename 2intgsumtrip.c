#include<stdio.h>
int sum(),res1,trip(),res2;
int main()
{
res1=sum();
res2=trip();

}
int sum()
{
int a=2,b=2;
res1=a+b;
//printf("%d\n",res1);
}
int trip()
{
res2=res1*3;
printf("%d\n",res2);
}
