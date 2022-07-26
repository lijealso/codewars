#include <stdbool.h>
#include <math.h>
#include <stdio.h>

int number_digits = 0;

int main()
{

    int num = 9800817;
    int num2 = num;
    int num_final = num;
    int i = 0;

    while (num != 0)
    {
        num = num / 10;
        number_digits = number_digits + 1;
    }

    int arr[number_digits];
    int arr2[number_digits];
    int a = 0;
    int j, r;

    while (num2 != 0)
    {
        r = num2 % 10;
        arr[i] = r;
        i++;
        num2 = num2 / 10;
    }

    int k = 0;
    for (j = i - 1; j > -1; j--)
    {
        arr2[k] = arr[j];
        printf("%d ", arr2[k]);
        k++;
    }

    int narcissistic = 0;
    for (int s = 0 ; s < number_digits ; s++){
        narcissistic = narcissistic + pow(arr2[s], number_digits);
    }

    if (narcissistic == num_final){
        printf("The number is narcissistic\n");
    }
    else {
        printf("The number is not narcissistic\n");
    }

}