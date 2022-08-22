 #include<stdio.h>
 void main()
 {
  int i=1,c=0,number,maximum,minimum;
  printf("enter the minimum and maximun number\n") ;
  scanf("%d %d",&minimum,&maximum);
  number=minimum;
  printf("prime number between %d and %d are:\n");
  while(number<=maximum)
  {
  c=0;
  i=2-
  while(i<=number/2)
  {
  if(number%i==0)
  {
      c++;
      break;
  }
  i++;
  }
  if(c==0&&number!=1)
  {
  printf("prime number is %d\n",number);
  }
  number++;
  }
  return 0;
  }
