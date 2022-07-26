#include <stdlib.h>
#include <stdio.h>
#include <string.h>

const char *bool_to_word (int value);


const char *bool_to_word (int value)
{
  if (value){
    return "Yes";
  }
  else{
    return "No";
  }
  
}