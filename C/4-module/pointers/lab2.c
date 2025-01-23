/*
Level of difficulty
Easy

Objectives
Familiarize the student with:

Fixing errors in a program
Integer numbers
Printing on screen
Scenario
Check the program in the editor. It copies values from one array to another, adding 1.0. Then it's supposed to print the numbers from the middle point of the new array to both ends, alternately.

Warning: the midpoint is betwen two cells - one before and one after - start with them.

We'll use pointers to make a copy, in order to show you this kind of operation (but in this case, you can use array indexing).

Find all possible compilation errors and logic errors. Fix them. Your version of the program must print the same result as the expected output.

Before you use the compiler, try to find the errors only by manual code analysis.

Expected output
4.5
6.8
2.3
9.8
5.2
8.2
4.4
7.5
3.3
9.2

*/

#include <stdio.h>

int main()
{
	int i;
	float numbers[11] = {3.3, 4.4, 5.2, 2.3, 4.5, 1.0, 6.8, 9.8, 8.2, 7.5, 9.2};
	float biggerNumbers[11];
	float *source;
	float *copy;
	float *middel1;
	float *middel2;

	source = numbers;
	copy = biggerNumbers;

    

	for (i = 0; i < 11; i++)
	{
		copy[i] = source[i];
	}

	middel1 = source;
	middel2 = copy;
	
	for ( int i = 1;i <6; i++)
	{
		printf("%.1f\n", middel1[5-i]);
		printf("%.1f\n", middel2[5+i]);
	}
	

	return 0;
}