#include <string.h>
#include <stdlib.h>

char *repeat_str(size_t count, const char *src) {
    size_t length;
    char *result;
    length = strlen(src);
    result = malloc(length * count + 1);
    if (result == NULL)
        return NULL;
    for (int index = 0 ; index < count ; ++index)
        memcpy(result + index * length, src, length);
    result[length * count] = '\0';
    return result;
}