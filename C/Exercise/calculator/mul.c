#include <stdio.h>
#include "mul.h"


int mul(int param1, int param2) {

    if(param2 != 0){
        return param1 * param2;
    } else {
        printf("If you multipli for zero the result is zero\n");
        return 1;
    }
    
}