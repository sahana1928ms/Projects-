#include<stdio.h>
void main()
{
int a[2][2][2],i,j,k;
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
for(k=0;k<=1;k++)
{
    printf("enter the elements");
    scanf("%d\n",&a[i][j][k]);
}
}
}
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
for(k=0;k<=1;k++)
{
printf("%d\t",a[i][j][k]);
}
}
}

}
