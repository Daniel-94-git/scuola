/*
Level of difficulty
Easy

Objectives
Familiarize the student with:

Logic of loops: for
Inverting logic of for loops
Getting input from the user
Printing characters on screen
Scenario
Write a program that asks the user to enter a number, and prints twice as many lines as the number inputted.

The first half of every other line contains one * character at the start, as many spaces as the number of this line (line numbers count from 0 in this task) and one * character at the end of the line. The second half is a mirror reflection of the first.

The outputted "drawing" should be similar to an arrowhead.

Your version of the program must print the same result as the expected output. To do this task, you should use two outer for loops and two inner for loops.

You shouldn't use any special formatting in the printf to print the spaces - just use the for loop.

Two exceptions:

when the user inputs a number less than or equal to 1, the program doesn't print any line.
when the user inputs a number greater than 20, the program prints only forty lines.
Sample input
3

Expected output
**
* *
*  *
*  *
* *
**

Sample input
9

Expected output
**
*   *
*    *
*     *
*      *
*       *
*        *
*         *
*          *
*          *
*         *
*        *
*       *
*      *
*     *
*    *
*   *
**

*/

#include <iostream>

using namespace std;

int main()
{

    int number;
    cout << "Insert number :";
    cin >> number;

    if (number <= 1)
    {
        cout << "Number of line is insufficent" << endl;
    }

    else if (number >= 2 && number <= 20)
    {
        for (int i = 0; i < number; i++)
        {
            cout << "*";

            for (int j = 0; j < i; j++)
            {
                cout << " ";
            }
            cout << "*" << endl;
        }
        for (int i = number; i >= 1; i--)
        {
            cout << "*";

            for (int j = 1; j < i; j++)
            {
                cout << " ";
            }
            cout << "*" << endl;
        }
    }
    else if (number >= 21)
    {
        number = 20;
        for (int i = 0; i < number; i++)
        {
            cout << "*";

            for (int j = 0; j < i; j++)
            {
                cout << " ";
            }
            cout << "*" << endl;
        }
        for (int i = number; i >= 1; i--)
        {
            cout << "*";

            for (int j = 1; j < i; j++)
            {
                cout << " ";
            }
            cout << "*" << endl;
        }
    }

    return 0;
}