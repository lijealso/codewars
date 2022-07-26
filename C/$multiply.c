#include <stdio.h>

int multiply(int a, int b) {
  return a * b;
}

int main() {
    int a = 3;
    int b = 5;
    int x = multiply(a, b);
    printf("Resultado = %d\n", x);
}