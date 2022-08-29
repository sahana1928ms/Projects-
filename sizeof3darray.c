#include<stdio.h>
void main()
{
int i,j,k,m,n,o;
printf("enter the size\n");
scanf("%d %d %d",&m,&n,&o);
int a[m][n][o];
printf("enter the elements");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
for(k=0;k<o;k++)
{

    scanf("%d",&a[i][j][k]);
}
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
for(k=0;k<o;k++)
{
printf("%d",a[i][j][k]);
}
}
}

}
