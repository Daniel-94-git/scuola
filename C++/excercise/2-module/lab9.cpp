/*
Level of difficulty
Easy

Objectives
Familiarize the student with:

Conditions and conditional executions
Fixing errors in a program
Printing on screen
Scenario
Write a program that prints the name of a given day of the week.
Your program must print the same result as the expected output.

Test it for all days of the week (for now, test it only for valid values).

Expected output
The day of the week is: Monday
*/

#include <iostream>

using namespace std;

int main(void) 
{
	int dayOfWeek = 1;
	
    if (dayOfWeek == 1)
    {
        cout << "The day of th week is : Monday" << endl;    
    }
    
	return 0;
}