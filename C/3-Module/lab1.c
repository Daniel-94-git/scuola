/* finding the largest of three numbers */

#include <stdio.h>

int main(void)
{
    /* the three numbers */
    int number1, number2, number3;

    /* we will save the largest number here */
    int max;

    /* read three numbers */
    scanf("%d", &number1);
    scanf("%d", &number2);
    scanf("%d", &number3);

    /* we temporarily assume that the first number is the largest one */
    /* we will check it soon */
    max = number1;

    /* we check if the second value is the largest */
    if(number2 > max)
    max = number2;

    /* we check if the third value is the largest */
    if(number3 > max)
    max = number3;

    /* we print the result */
    printf("The largest number is %d \n",max);

    /* we finish the program successfully */
    return 0;
}