#include <stdio.h>
#include "sum.h"

void sum(int param1, int param2){
    int sum = param1 + param2;
    printf("The sum is %d\n", sum);
}

int add(int param1, int param2) {
    return param1 + param2;
}