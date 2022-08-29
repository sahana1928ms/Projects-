  #include<stdio.h>
  int main()
  {
  int *p,*q,a,b;
  printf(" enter  the 2 number");
  scanf("%d %d",&a,&b);
  p=&a;
  q=&b;
  if(*p>*q)
  {
  printf("max=%d\n",*p);
  }
  else if(*q>*p)
  {
      printf("max=%d\n",*q);
  }
  else
  {
  printf("both are equal");
  }
  }
