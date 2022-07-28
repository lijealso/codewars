#include <ctype.h>
#include <string.h>
#include <stdio.h>

char *get_initials (const char *full_name, char initials[4])  { 
  initials[0] = toupper(full_name[0]);
  initials[1] = '.';
  int tam = strlen(full_name);
  
  for (int i = tam - 1 ; i >= 0 ; i--)  {
      if ( full_name[i] == ' ' )  {
          initials[2] = toupper(full_name[i + 1]);
      }
  }
  return initials; // return it
}