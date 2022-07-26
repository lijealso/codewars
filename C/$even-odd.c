#include <stdlib.h>

const char * even_or_odd(int number){
  
  int x = abs(number);
  
  if (x % 2 == 0)
  {
    return "Even";
  }
  else if (x % 2 == 1)
  {
    return "Odd";
  }
}