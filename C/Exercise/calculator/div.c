#include <stdio.h>
#include "div.h"


int div(int param1, int param2) {
    
    if(param2 != 0){
        return param1 / param2;
    } else {
        printf("Is not possible divide for zero\n");
        return 1;
    }
    
}