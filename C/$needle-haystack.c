#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *find_needle(const char **haystack, size_t count){
  
  int w = (int)count;
  int h;
  
 char *dest = malloc(60); 
  
  for (int i = 0; i < w ; i++)
    if (strncmp (haystack[i],"needle",5) == 0)
        h = i;
  
  char str[20];
  sprintf(str, "%d", h);
  printf("str = %s\n", str);
  strcat(dest, "found the needle at position ");
  strcat(dest, str);

return dest;
}