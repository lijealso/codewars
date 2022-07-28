#include <string.h>
#include <stdio.h>

char *strrev (char *string)
{
  int i = 0;
  int j;
  int tam = strlen(string);
  char string2[tam];
  
  for (j = tam - 1 ; j >= 0 ; j --)
    {
    string2[j] = string[i];
    printf("d = %c\n", string2[j]);
    i++;
  }
  
  for (int k = 0 ; k < tam ; k++)
    {
    string[k] = string2[k];
    printf("d = %c\n", string[k]);
    i++;
  }
  
  
  return string; // reverse the string in place and return it
}