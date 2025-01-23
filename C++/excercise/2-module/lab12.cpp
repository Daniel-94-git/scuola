/*
Level of difficulty
Easy

Objectives
Familiarize the student with:

Printing data in different formats
Fixing errors in a program
Scenario
Write a small program which prints a figure like the one in the Expected Output section below.

Your version of the program must print the same result as the expected output.
Remember, if you want to print the \ character, then you have to escape it, like this: \\.

Expected output
       ^       
     /    \     
   /        \   
 <           > 
   \        /   
     \    /     
       v       
*/

#include <iostream>
using namespace std;

int main(){

    cout<<"       ^"<<endl;
    cout<<"     /    \\"<<endl;
    cout<<"   /        \\"<<endl;
    cout<<" <           >"<<endl;
    cout<<"   \\        /"<<endl;
    cout<<"     \\    /"<<endl;
    cout<<"       v"<<endl;

    cout<<"       ^\n     /    \\\n   /        \\\n <           >\n   \\        /\n     \\    /\n       v\n";

    return 0;
}