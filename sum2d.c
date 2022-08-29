#include<stdio.h>
void main()
{
int a[2][3],i,j,sum=0,mul=1;
for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
        printf("enter elements ");
        scanf("%d ",&a[i][j]);
    }
}
for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
       // printf("enter elements ");
printf("%d\n",a[i][j]);
       sum=sum+a[i][j];
       mul=mul*a[i][j];
    }

    }

printf("%d\n",sum);
printf("%d\n",mul);
}

