#include<stdio.h>
void main()
{
int r,c,e,i,j,b;
printf("enter number of rows and columns");
scanf("%d %d",&r,&c);
int a[r][c];
printf("enter elements of 2D array\n");
for(int i=0;i<r;i++)
{
    for(int j=0;j<0;j++)
    {
printf("\t");
scanf("%d",&e);
a[i][j]=e;
}
for(int i=0;i<r;i++)
{
printf("\n");
}
if(a[i][j]==b[i][j])
{
printf("equal");
}
else
{
printf("not equal");
}
}
