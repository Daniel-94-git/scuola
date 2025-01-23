/*
Level of difficulty
Easy

Objectives
Familiarize the student with:

Conditions and conditional executions
Fixing errors in a program
Printing on screen
Scenario
Write a small program which prints the absolute value of a given number if the number
is less than zero. Next it should print the value of the given number on a separate line.

Your program must print the same result as the expected output.
Test it for several other cases (positive numbers, other negative numbers, etc.)

Expected output
The absolute value of -3 is 3
The value of n is -3
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void) 
{
	int n = -3;
	/* your code */
	int x = abs(n);
    cout<<"The absolutes value of "<< n << "is " << x << endl;
    cout<< "The value of n is " << n <<endl;
	
	return 0;
}