/*
Level of difficulty
Easy

Objectives
Familiarize the student with:

Logic of loops: do - while
Getting input from the user
Printing characters on screen
Scenario
Write a program that asks the user to enter a number. Then:

the program should print the number of lines corresponding to the number inputted;
each line should contain the number of pairs of characters *# equal to the number of this line.
The outputted "drawing" should be similar to the right half of a pyramid.

Your version of the program must print the same result as the expected output. To do this lab,
you must use two do-while loops.

However:

when the user inputs a number less than or equal to 1, the program should print only one line;
When the user inputs a number greater than 20, the program should print only twenty lines.
Sample Input
3

Expected output
*#
*#*#
*#*#*#

Sample Input
5

Expected output
*#
*#*#
*#*#*#
*#*#*#*#
*#*#*#*#*#

Sample Input
0

Expected output
*#
*/

#include <stdio.h>

int main()
{

	int number_Imput;
	
	printf("Insert a number of line do you want : ");
	scanf("%d", &number_Imput);
	/*


		if (number_Imput <= 1)
		{
			printf("*#\n");

		}
		else if (number_Imput >= 2 || number_Imput <= 20)
		{
			for (int i = 0; i <= number_Imput; i++)
			{

				for (int j = 1; j <= i; j++)
				{
					printf("*#");
				}

				printf("\n");

			}
		}
		else if (number_Imput>20)
		{
			for (int i = 0; i <= 20; i++)
			{

				for (int j = 1; j <= i; j++)
				{
					printf("*#");
				}

				printf("\n");

			}
		}
	*/

	

	if (number_Imput <= 1)
	{
		printf("*#\n");
		
	}
	else if (number_Imput >= 2 && number_Imput <= 20)
	{
		int i = 1;
		do
		{

			int j = 1;

			do
			{

				printf("*#");
				j = j + 1;
			} while (j <= i);

			printf("\n");
			i = i + 1;

		} while (i <= number_Imput);
	}
	else if (number_Imput >= 21)
	{
		int i = 1;
		do
		{

			int j = 1;

			do
			{

				printf("*#");
				j = j + 1;
			} while (j <= i);

			printf("\n");
			i = i + 1;

		} while (i <= 20);
	}

		return 0;
}