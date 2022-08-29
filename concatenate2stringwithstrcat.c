
#include<stdio.h>
void main()
{
char str1[10]="hello",str2[10]="world";
char str3[20];
int i=0,j=0;
while(str1[i]!='\0')
{
    str3[j]=str1[i];
    i++;
    j++;
}
//i=0;
while(str2[i]!='\0')
{

    str3[j]=str2[i];
    i++;
    j++;
}
str3[j]='\0';
printf("%s",str3);
}
