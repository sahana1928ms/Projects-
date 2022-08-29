#include<stdio.h>
void main()
{
char str[10],*ptr,vowel=0,consonants=0;
int i=0;
printf("enter the string");
scanf("%s",&str);
ptr=&vowel;
ptr=&consonants;
for(int i=0;str[i]!=NULL;i++)
{
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
{
vowel++;
}
else
{
    consonants++;
}
}
printf("number of vowels=%d\n and consonants=%d\n",vowel,consonants);
}
