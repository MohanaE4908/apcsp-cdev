#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %p\n", (void*)ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %p\n", (void*)&a);

  int d;
  int c;

  int* ptrtoc;
  int* ptrtod;
  
  c = 3;
  printf("The value of c is %d\n", c);

  d = 4;
  printf("The value of d is %d\n", d);

  ptrtoc = &c;
   printf("The address of c is %p\n", (void*)ptrtoc);
  ptrtod = &d;
   printf("The address of d is %p\n", (void*)ptrtod);

  int e = *ptrtoc;
  int f = *ptrtod;
  
 c = f;
 d = e;

printf("The value of c is %d\n", c);
printf("The value of d is %d\n", d);
}
