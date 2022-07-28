#include <stddef.h>
#include <stdio.h>

int find_smallest_int(int *vec, size_t len)
{
  int menor = vec[0];
  
  for (int i = 0 ; i < (int)len ; i++)
    {
      if (vec[i] < menor)
        {
        menor = vec[i];
      }
  }
    
    return menor;
}