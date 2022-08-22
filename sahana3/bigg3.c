#include<stdio.h>
void main()
{
int n1,n2,n3;
printf("enter the values\n");
scanf("%d\n %d\n %d\n",&n1,&n2,&n3);
if(n1>=n2&&n1>=n3)
{
printf("largest=%d\n",n1);
scanf("%d\n ",&n1);
}
else if(n2>=n1&&n2>=n3)
{
printf("largest=%d\n",n2);
scanf("%d\n ",&n2);
}
else if(n3>=n1&&n3>=n2)
{
printf("largest=%d\n",n3);
scanf("%d\n ",&n3);
}
}
