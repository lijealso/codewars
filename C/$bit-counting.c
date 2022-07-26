#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

size_t countBits(unsigned value);

size_t countBits(unsigned value)
{
    int number_of_ones = 0;
    while (value >= 1){
        if (value % 2 == 0){
            value = value / 2;
        }
        else if (value % 2 == 1){
            number_of_ones++;
            value = value / 2;
        }
    }
    printf("Número de uns: %d", number_of_ones);
	return number_of_ones;
}

void main() {

    unsigned value = 1234;
    countBits(value);
}