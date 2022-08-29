#include<stdio.h>
int main()
{
int *ptr,a=10;
ptr=&a;
printf("%d\n",a);
printf("%d\n",ptr);
printf("%p\n",*ptr);
printf("sizeof=%p\n",sizeof(*ptr));
printf("sizeof=%d\n",sizeof(ptr));
}
