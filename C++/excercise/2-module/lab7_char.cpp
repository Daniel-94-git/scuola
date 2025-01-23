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

#include <iostream>
using namespace std;

int main()
{
	char zero = '0';

    cout << " '1' - '" << zero << "' is : '1' " << endl;
    cout << " '2' - '" << zero << "' is : '1' " << endl;
    cout << " '3' - '" << zero << "' is : '1' " << endl;
    cout << " '4' - '" << zero << "' is : '1' " << endl;
    cout << " '5' - '" << zero << "' is : '1' " << endl;
    cout << " '6' - '" << zero << "' is : '1' " << endl;
    cout << " '7' - '" << zero << "' is : '1' " << endl;
    cout << " '8' - '" << zero << "' is : '1' " << endl;
    cout << " '9' - '" << zero << "' is : '1' " << endl;
    cout << " '"<< zero <<"' - '" << zero << "' is : '"<< zero<< "' " << endl;
    



	cout << "\n#################\n\n";

	for(int i = 0; i < 10;i++){

		char confronto = '0';
        cout << "'" << confronto - 48 + i << "' - '" << zero << "' is : '" << confronto - 48 + i << "'\n"; 
		
		
		

	}

	return 0;
}