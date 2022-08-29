#include<stdio.h>
void main()
{
char alph[27],*ptr,i=0;
//printf("enter all the alphbates\t");
ptr=alph;
for(i=0;i<26;i++)
{
*ptr=i+'a';
ptr++;
}
ptr=alph;
printf("the alphabets are\n");
for(i=0;i<26;i++)
{
printf("%c",*ptr);
ptr++;
}
//printf("\n\n");
}
