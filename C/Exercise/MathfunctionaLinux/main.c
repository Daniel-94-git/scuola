#include <stdio.h>
#include "math_utils.h"

int main() {
    int a = 10, b = 2 , c = 5;
    float s = 10 , f = 5.5;
    

    printf("Sum: %d\n", sum(a, b));
    printf("Subtract: %d\n", subtract(a, b));
    printf("Product: %d\n", mult(a, b));
    printf("Division: %f\n", div(s, f));
    printf("Quadrato: %d\n", quadrato(c));

    return 0;
}
