#include <stddef.h>

void invert(int *values, size_t values_size)
{
  int s = (int)values_size;
  for (int i = 0 ; i < values_size ; i++)
  {
    values[i] = - values[i];
  }
}