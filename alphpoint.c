#include<stdio.h>
void main()
{
char i,*j;
printf("alphabets are:\n");
j=&i;
for(*j='a';*j<='z';(*j)++)
printf("%c\n",*j);
}
