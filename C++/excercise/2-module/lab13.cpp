/*
Level of difficulty
Easy

Objectives
Familiarize the student with:

Getting data from the user
Printing data in different formats
Fixing errors in a program
Scenario
Write a program which records two float values.
Next, print the sum, the difference and the result of the multiplication of these two values.

Your version of the program must print the same result as the expected output.

Sample Input
5.5
5.6

Sample output
Value A: 5.5
Value B: 5.6
5.500000 + 5.600000 = 11.100000.
5.500000 - 5.600000 = -0.100000.
5.500000 * 5.600000 = 30.799999.

Sample Input
9.13
4.18

Sample output
Value A: 9.13
Value B: 4.18
9.130000 + 4.180000 = 13.309999.
9.130000 - 4.180000 = 4.950000.
9.130000 * 4.180000 = 38.163399.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float numberA;
    float numberB;

    cout << "Insert a number: ";
    cin >> numberA;
    cout <<"Insert a number: ";
    cin >>numberB;


    cout<<"Value A: "<<fixed<<setprecision(2)<<numberA<<endl; 
    cout<<"Value B: "<<fixed<<setprecision(2)<<numberB<<endl;

    cout<<numberA<<" + "<<numberB<<" = "<<numberA+numberB<<endl;
    cout<<numberA<<" - "<<numberB<<" = "<<numberA-numberB<<endl;
    cout<<numberA<<" * "<<numberB<<" = "<<numberA*numberB<<endl;

    cout<<"\n#############################\n\n";

    float number_A;
    float number_B;

    cout << "Insert a number: ";
    cin >> number_A;
    cout <<"Insert a number: ";
    cin >>number_B;

    cout<<"Value A: "<<fixed<<setprecision(2)<<number_A<<endl; 
    cout<<"Value B: "<<fixed<<setprecision(2)<<number_B<<endl;

    cout<<number_A<<" + "<<number_B<<" = "<<number_A+number_B<<endl;
    cout<<number_A<<" - "<<number_B<<" = "<<number_A-number_B<<endl;
    cout<<number_A<<" * "<<number_B<<" = "<<number_A*number_B<<endl;


        return 0;
}