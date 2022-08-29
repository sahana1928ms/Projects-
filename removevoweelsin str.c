#include<stdio.h>
void main()
{
char a[]="pushpa";
int len=strlen(a);
for(int i=0;i<len;i++){
if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'){
printf("%c",a[i]);
}
}
}
