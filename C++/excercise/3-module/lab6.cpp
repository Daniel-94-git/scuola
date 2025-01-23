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

Your version of the program must print the same result as the expected output. To do this lab, you must use two do-while loops.

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

#include <iostream>
using namespace std;

int main(){

    int lines;
    cout << "Insert number of lines : ";
    cin >> lines;

    if (lines<=1)
    {
        cout << "*#"<<endl;
    }
    else if (lines >=2 && lines <= 20)
    {
        int i = 0;
        
        do
        {
            i++;
            int j = 0;
            do
            {
                j++;
                cout<<"*#";
                
                
            } while (j < i);
            cout<<endl;
            

        } while (lines > i);
        
    }
    else if (lines>=21)
    {
        int i = 0;
        
        do
        {
            i++;
            int j = 0;
            do
            {
                j++;
                cout<<"*#";
                
                
            } while (j < i);
            cout<<endl;
            

        } while (20 > i);
    }
    
    
    

    return 0;
}