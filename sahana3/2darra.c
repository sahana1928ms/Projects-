#include<stdio.h>
void main()
{
int a[2][3],i,j;
printf("enter the row and column elements");
for(i=0;i<=1;i++)
    {
    for(j=0;j<=2;j++)
     scanf("%d",&a[i][j]);
    }
    for(i=0;i<=1;i++)
    {
    for(j=0;j<=2;j++)
     printf("a[i][j]=%d\t",a[i][j]);
    }

}
