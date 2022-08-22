#include<stdio.h>
void main()
{

char b;
printf("enter the number :");
scanf("%c",&b);
if(b>=0 && b<=100)

{
printf("it is digit\n");
}
if((b>= 'A' && b<= 'Z')||(b>= 'a' && b<= 'z'))
{
printf("it is alpha\n");
}
else
    {
printf("entered char is special char\n");
}

}
