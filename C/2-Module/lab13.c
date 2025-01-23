/*
Level of difficulty
Easy

Objectives
Familiarize the student with:

Getting data from the user
Printing data in different formats
Fixing errors in a program
Scenario
Write a program which records two float values.
Next, print the sum, the difference and the result of the multiplication of these two values.

Your version of the program must print the same result as the expected output.

Sample Input
5.5
5.6

Sample output
Value A: 5.5
Value B: 5.6
5.500000 + 5.600000 = 11.100000.
5.500000 - 5.600000 = -0.100000.
5.500000 * 5.600000 = 30.799999.

Sample Input
9.13
4.18

Sample output
Value A: 9.13
Value B: 4.18
9.130000 + 4.180000 = 13.309999.
9.130000 - 4.180000 = 4.950000.
9.130000 * 4.180000 = 38.163399.
*/

#include <stdio.h>

int main(){

    float valueA = 0;
    float valueB = 0;
    
    
    // first case

    printf("Insert a number float : ");
    scanf("%f",&valueA);
    printf("Insert a number float : ");
    scanf("%f",&valueB);

    printf("Value A : %.1f\n",valueA);
    printf("Value A : %.1f\n",valueB);

    printf("%f + %f = %f\n",valueA,valueB,(valueA + valueB));
    printf("%f - %f = %f\n",valueA,valueB,(valueA - valueB));
    printf("%f * %f = %f\n",valueA,valueB,(valueA * valueB));
    printf("######################");

    // second case

    float value_A = 0;
    float value_B = 0;

    printf("Insert a number float : ");
    scanf("%f",&value_A);
    printf("Insert a number float : ");
    scanf("%f",&value_B);

    printf("Value A : %.1f\n",value_A);
    printf("Value A : %.1f\n",value_B);

    printf("%f + %f = %f\n",value_A,value_B,(value_A + value_B));
    printf("%f - %f = %f\n",value_A,value_B,(value_A - value_B));
    printf("%f * %f = %f\n",value_A,value_B,(value_A * value_B));


    return 0;
}