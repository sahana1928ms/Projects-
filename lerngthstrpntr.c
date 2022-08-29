#include<stdio.h>
int main()
{
char str[20],*ptr;
int i=0;
printf("enter string");
scanf("%s",&str);
ptr=str;
while(*ptr!='\0')
{
i++;
ptr++;
}
printf("length of string=%d",i);
}
