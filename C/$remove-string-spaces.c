#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *no_space(const char *str_in) {
  
  int i = 0, j = 0;
  int tam = (int)strlen(str_in);
  char *result = malloc(tam * sizeof(char));
  
  while ( str_in[i] )
  {
    if (str_in[i] != ' ')
          result[j++] = str_in[i];
    i++;
  }
  
  result[j] = '\0';
  return result;
}