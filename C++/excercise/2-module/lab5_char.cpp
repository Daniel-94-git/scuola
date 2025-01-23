/*
Level of difficulty
Easy

Objectives
Familiarize the student with:

Character types and values
Fixing errors in a program
Printing on screen
Scenario
Check the program in the editor. Find all possible compilation errors and logic errors. 
Fix them, but do not change any character values.

Your version of the program must print the same result as the expected output. 
Before you use the compiler, try to find the errors only by manual code analysis.

Expected output
Diff beetween 'c' and 'a' is : 2
Diff beetween 'a' and 'c' is : -2
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Diff beetwenn : " << 'c' << " and : " << 'a' << " is : " << 'c' - 'a' << endl;
	//printf("Diff beetween '%c' and '%c' is : %d\n", 'c', 'a', 'c'-'a');
    cout << "Diff beetween : " << 'a' << " and : " << 'c' << " is : " << 'a' - 'c' << endl;
	//printf("Diff beetween '%c' and '%c' is : %d\n", 'a', 'c', 'a'-'c');
	return 0;
}