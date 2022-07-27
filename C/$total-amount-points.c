#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int points(const char* const games[10])
{ 
  int sum = 0;
  for (int i = 0 ; i < 10 ; i++)
  {
      char *result = malloc(3 * sizeof(char));
      strcpy(result, games[i]); 
      printf("Result = %s \n", result);
      if (result[0] > result[2])
      {
        sum = sum + 3;
      }
      if (result[0] == result[2])
      {
        sum = sum + 1;
      }   
      free(result);
  }
  printf("Total = %d", sum);
  return sum;
}