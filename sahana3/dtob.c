#include<stdio.h>
void main()
{
 int n,i,j,b[i];
 printf("enter the number\n");
 scanf("%d",&n);
 for(i=0;i=n>0;i++)
 {
     b[i]=n%2;
     n=n/2;
     printf("bin=%d");
 }
 for(j=i-1;j>=0;j--)
    printf("%d",b[i]);
 printf("\n");
}



