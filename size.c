#include<stdio.h>
void main()
{
int r,c,e;
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
}
printf("2D array is:\n");
for(int i=0;i<r;i++)
{
for(int j=0;j<i;j++)
{
printf("\t %d",a[i][j]);
}
}
printf("\n");
}


