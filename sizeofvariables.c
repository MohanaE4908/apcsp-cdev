#include<stdio.h>

int main()
{
  int a = 545;

  // print value and size of an int variable
  printf("int a value: %d and size: %lu bytes\n", a, sizeof(a));

  char c ='l';
  printf("char c value: %d and size: %lu bytes\n", c, sizeof(c));


  float f =  1.09;
  printf("float f value: %d and size: %lu bytes\n", f, sizeof(f));


  double d = 124.456;
  printf("double d value: %d and size: %lu bytes\n", d, sizeof(d));


  short int i = 1;
  printf("short int i value: %d and size: %lu bytes\n", i, sizeof(i));

   
  unsigned int b = 5;
  printf("long int b value: %d and size: %u bytes\n", b, sizeof(b));
}

