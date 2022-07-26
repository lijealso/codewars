#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *remove_char(char *dst, const char *src)
{
    int len = strlen(src); // src = 12345/0
    if (len > 0)
        strcpy(dst, ++src); // dst =  2345/0
    if (len > 1)
        dst[len - 2] = '\0'; // dst =  234/0/0
    return dst;
}