#include<stdio.h>
void main(){
int i,n;
printf("enter the size of an array");
scanf("%d",&n);
int a[n],*p[n];
printf("enter the elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
p[i]=&a[i];
for(i=0;i<n;i++)
printf("%d\t",*p[i]);
}
