#include <stdio.h>
#include <string.h>

int main()
{
  char str1[27]= "";
  char str3[54];
  for (int i = 0; i < 26; i++)
    { 
      str1[i] = 'a' + i;
    }
  char  str2[] = "abcdefghijklmnopqrstuvwxyz";


  
  if (strcmp(str1, str2) == 0)
    printf("the strings are identical\n");
  else
    printf("the strings are different\n");



  for (int i = 0; i < 26; i++)
    {
      str2[i] -= 32;
    }


  if (strcmp(str1, str2) == 0)
      printf("the strings are identical\n");
  else
    printf("the strings are different\n");


strcat(str3, str1);
strcat(str3, str2);

printf("string 1 = %s\nstring 2 = %s\nstring 3 = %s/n", str1, str2, str3); 


  
  }
