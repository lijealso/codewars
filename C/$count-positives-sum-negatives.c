#include <stddef.h>
#include <stdio.h>

void count_positives_sum_negatives(
  int *values, size_t count, int *positivesCount, int *negativesSum) 
{  
  for (int i = 0; i < (int)count ; i ++)
    {
      if (values[i] > 0)
      {
        *positivesCount =  *positivesCount + 1;
      }
      if (values[i] < 0)
      {
        *negativesSum += values[i]; 
      }
    }
}  