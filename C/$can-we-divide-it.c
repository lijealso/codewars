#include <stdbool.h>

bool is_divide_by(int number, int a, int b) {

    bool x;
  
    if ((number % a) == 0 && (number % b) == 0)
    {
      x = true;
    }
    else
    {
      x = false;
    }
return x;
}