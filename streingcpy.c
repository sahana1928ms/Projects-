
#include<stdio.h>
#include<string.h>
void main()
{
char a[8]="string",i,b[8],c;
//printf("%s",a);
/*for(i=0;i<=8;i++)
{
b[i]=a[i];
}
b[i]='\0';
printf("b[8]= %s\n",b);
}*/
strcpy(b,a);
printf("%s",b);
}
