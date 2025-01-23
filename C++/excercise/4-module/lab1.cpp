/*
Level of difficulty
Easy

Objectives
Familiarize the student with:

Working with the switch-case statement
Printing on screen
Scenario
Write a program that asks the user to enter the number of a month, and prints the name of that month on the screen.

When the number does not correspond to a month (less than 1 or greater than 12), the program prints: Error: no such month in my calendar..

If you can't remember all the names (and of course to speed up your programming), here is a list:

1 : January
2 : February
3 : March
4 : April
5 : May
6 : June
7 : July
8 : August
9 : September
10 : October
11 : November
12 : December
Your version of the program must print the same result as the expected output.

Sample Input
12

Expected output
December

Sample Input
2

Expected output
February

Sample Input
15

Expected output
Error: no such month in my calendar.


*/


#include <iostream>
using namespace std;

int main()
{
	/* your code */
    int i;
    cout <<"Insert a number : ";
    cin >>i;
    switch(i) {
        case 1 : puts("January"); break;
        case 2 : puts("February"); break;
        case 3 : puts("March"); break;
        case 4 : puts("April"); break;
        case 5 : puts("May"); break;
        case 6 : puts("June"); break;
        case 7 : puts("July"); break;
        case 8 : puts("August"); break;
        case 9 : puts("September"); break;
        case 10 : puts("October"); break;
        case 11 : puts("November"); break;
        case 12 : puts("December"); break;
        default: puts("Error: no such month in my calendar.");
}
	return 0;
}