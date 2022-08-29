#include<stdio.h>
int main()
{
int c=1,i,day;
printf("enter the number of days");
scanf("%d",&day);
printf("sun\t mon\t tue\t wed\t thur\t fri\t sat\n");
while(c<=day)
    {
for(i=1;i<=7;i++)
{
if(c<=day)
printf("%d\t",c);
c++;
}
printf("\n");
}
}
