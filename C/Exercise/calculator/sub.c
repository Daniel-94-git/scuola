#include <stdio.h>
#include "sub.h"

/**
 * @brief subtraction function that computes the subtraction of two numbers
 * only if the second number is smaller or equal than the first one
 * 
 * @param first parameter 
 * @param second parameter
 * @return int 
 */
int sub(int param1, int param2) {
    if(param1 >= param2 ){
        return param1 - param2;
    } else {
        printf("Is not possible to compute the subtraction because the param2 is larger than param1");
        return 1;
    }
    
}