#include <inttypes.h>
#include <stddef.h>
#include <math.h>

void powers_of_two (size_t n, uint64_t powers[n + 1])
{
  for (int i = 0 ; i < n + 1 ; i++)
  {
      powers[i] = pow(2, i);
  }
}