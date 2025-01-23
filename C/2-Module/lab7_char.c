/*
Level of difficulty
Easy

Objectives
Familiarize the student with:

Character types and values
Using character types practically
Printing on screen
Scenario
Write a small program which prints the differences between all ten digit characters (from '1' to '0') and zero ('0'). 
Print each one on a separate line. Your program must print the same result as the expected output.

Expected output
'1' - '0' is: 1
'2' - '0' is: 2
'3' - '0' is: 3
'4' - '0' is: 4
'5' - '0' is: 5
'6' - '0' is: 6
'7' - '0' is: 7
'8' - '0' is: 8
'9' - '0' is: 9
'0' - '0' is: 0
*/

#include <stdio.h>

int main()
{
	char zero = '0';

	printf("'%c' - '%c' is : '%c'\n",'1',zero,'1');
	printf("'%c' - '%c' is : '%c'\n",'2',zero,'2');
	printf("'%c' - '%c' is : '%c'\n",'3',zero,'3');
	printf("'%c' - '%c' is : '%c'\n",'4',zero,'4');
	printf("'%c' - '%c' is : '%c'\n",'5',zero,'5');
	printf("'%c' - '%c' is : '%c'\n",'6',zero,'6');
	printf("'%c' - '%c' is : '%c'\n",'7',zero,'7');
	printf("'%c' - '%c' is : '%c'\n",'8',zero,'8');
	printf("'%c' - '%c' is : '%c'\n",'9',zero,'9');
	printf("'%c' - '%c' is : '%c'\n",zero,zero,zero);

	printf("\n#################\n\n");

	char confronto = '0';

	for(int i = 0; i < 10;i++){

		printf(" '%d' - '%c' is : '%d'\n", confronto - 48 + i, zero, confronto - 48 + i );
		
		

	}

	return 0;
}