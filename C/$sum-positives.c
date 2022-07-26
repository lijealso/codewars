#include <stddef.h>
#include <stdio.h>

int positive_sum(const int *values, size_t count);

int positive_sum(const int *values, size_t count)
{
    int sum_positives = 0;
    for (int i = 0; i < count; i++) {
        if (values[i] > 0){
            sum_positives = sum_positives + values[i];
        }
    }
printf("Soma positivos = %d\n", sum_positives);
return sum_positives;
}

int main()
{
    int values[] = {1,-4,7,12};
    size_t count = sizeof(values) / sizeof(values[0]);
    positive_sum(values, count);
}