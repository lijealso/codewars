#include <stdbool.h>
#include <string.h>

bool solution(const char *string, const char *ending)
{
    int i;
    int j;


    if (string = ""){
        return false;
    }

    else if (strlen(ending) > strlen(string)) {
        return false;
    }#include <stdbool.h>
#include <string.h>

bool solution(const char *string, const char *ending)
{
    int i;
    int j;


    if (strlen(ending) == 0){
        return true;
    }
    else if (strlen(ending) > strlen(string)) {
        return false;
    }
    else if (strlen(ending) == strlen(string)) {
        if (strncmp(string, ending, strlen(ending)) == 0)
            return true;
        else
            return false; 
    }
    else if (strlen(ending) < strlen(string)) {
        int tamanho = strlen(ending);
        char string2[tamanho];
        int j = strlen(string) - tamanho;
        for (i = 0 ; i < tamanho ; i++) {
            string2[i] = string[j];
            j = j + 1;
        }
        if (strncmp(string2, ending, tamanho) == 0)
            return true;
        else
            return false; 
    }
}
    else if (strlen(ending) == strlen(string)) {
        if (strcmp(string, ending) == 0)
            return true;
        else
            return false; 
    }
    else if (strlen(ending) < strlen(string)) {
        int tamanho = strlen(ending);
        char string2[tamanho];
        int j = strlen(string) - tamanho;
        for (i = 0 ; i < tamanho ; i++) {
            string2[i] = string[j];
            j = j + 1;
        }
        if (strcmp(string2, ending) == 0)
            return true;
        else
            return false; 
    }
}