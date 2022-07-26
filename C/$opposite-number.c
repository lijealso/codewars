#include <stddef.h>
#include <stdio.h>
#include <math.h>


float opposite(float num) {
    float opposite;
    opposite = -num;
    printf("Oposite: %f\n", opposite);
    return opposite;
}

int main()
{
    float num = -1.32;
    opposite(num);
}