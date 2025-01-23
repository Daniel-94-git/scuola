/*
Level of difficulty
Easy

Objectives
Familiarize the student with:

Printing data in different formats
Fixing errors in a program
Scenario
According to ISO 8601, many countries use the YYYY-MM-DD date format, where YYYY is a four-digit year,
MM means a two-digit month, and DD means a two-digit day (one letter means no leading zeros).
Local conventions can vary, and sometimes include formats like DD-MM-YYYY or MM-DD-YYYY.

Your task is to print values in four different formats. Check the program in the editor.

Find all possible compilation errors and logic errors.
Fix them, but do not change any character values. Your version of the program must print the same result as the expected output.

Before you use the compiler, try to find the errors only by manual code analysis.

Expected output
2016-02-20 - YYYY-MM-DD format - ISO 8601
02-20-2016 - MM-DD-YYYY format
20-02-2016 - DD-MM-YYYY format
20-2-2016 - D-M-Y format
*/

#include <iostream>
using namespace std;

int main(){

    int years = 2016;
    int mounth = 02;
    int day = 20;

    char anno[5] ="YYYY";
    char mese[3] ="MM";
    char giorno[3] ="DD";
    char format[7] ="format";
    char iso[] ="ISO 8601";
    char d = 'D';
    char m = 'M';
    char y = 'Y';
    
    cout<<years <<"-"<<mounth<<"-"<<day<<" - "<<anno<<"-"<<mese<<"-"<<giorno<<" "<<format<<" - "<<iso<<endl;
    cout<<day <<"-"<<mounth<<"-"<<years<<" - "<<giorno<<"-"<<mese<<"-"<<anno<<" "<<format<<endl;
    cout<<mounth <<"-"<<day<<"-"<<years<<" - "<<mese<<"-"<<giorno<<"-"<<anno<<" "<<format<<endl;
    cout<<mounth <<"-"<<day<<"-"<<years<<" - "<<d<<"-"<<m<<"-"<<y<<" "<<format<<endl;

    return 0;
}