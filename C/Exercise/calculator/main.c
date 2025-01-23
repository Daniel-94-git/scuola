#include <stdio.h>
#include "sum.h"
#include "sub.h"
#include "mul.h"
#include "div.h"

int main() {
    int param1 = 10, param2 = 0;
    int res_sub;
    int res_mul;
    int res_div;

    printf("Void function -> ");
    sum(param1, param2);
    printf("\n");

    int res = add(param1, param2);
    printf("%d + %d = %d\n", param1, param2, res);

    printf("\nSub function -> ");
    
    res_sub = sub(param1, param2);
    printf("%d\n", res_sub);
    res_sub = sub(param2, param1);
    printf("\n");

    res_mul = mul(param1,param2);
    printf("The result of multiplication : %d ",res_mul);
    printf("\n");

    res_div = div(param1,param2);
    printf("The result of division is : %d\n",res_div);
    return 0;
}