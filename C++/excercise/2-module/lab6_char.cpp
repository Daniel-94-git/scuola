/*
Level of difficulty
Easy

Objectives
Familiarize the student with:

Character types and values
Fixing errors in a program
Printing on screen
Scenario
Check the program below. Find all possible compilation errors and logic errors. Fix them, but you may not change any character values. 
You may change variable names. Your version of the program must print the same result as the expected output. Before you use your compiler, try to find the errors only by manual code analysis.

Expected output
Upper case letters beetween (and with) 'Z' and 'A' is : 26
Lower case letters beetween (and with) 'z' and 'a' is : 26
*/

#include <iostream>

using namespace std;
int main (){

	char firstLetter = 'A';
	char firstSmallLetter = 'a';
	char lastLetter = 'Z';
	char lastSmallLetter = 'z';

    cout << "Upper case letters beetween and (with ) : " << lastLetter << " and : " << firstLetter << " is : " << firstLetter - lastLetter + 51<< endl;
	cout << "Lower case letters beetween (and with) : " << lastSmallLetter << " and : " << firstSmallLetter << " is :" << lastSmallLetter - firstSmallLetter + 1<< endl;
	
	return 0;
}