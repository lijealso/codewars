#include <string.h>
#include <stdio.h>
#include <ctype.h>

char *to_jaden_case (char *jaden_case, const char *string)
{
// write to jaden_case and return it
  *jaden_case = '\0';
  int w = strlen(string);
  
  jaden_case[0] = toupper(string[0]);
  for (int i = 1 ; i <= w ; i++){
    if (string[i-1] == ' '){
        jaden_case[i] = toupper(string[i]); }
    else {
      jaden_case[i] = string[i]; }
  }
  return jaden_case;
}