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

#include <stdio.h>
#include <string.h>
int main(){

    

    int year = 2016;
    int mounth = 02;
    int day = 20;

    char years_char[5] = "YYYY";
    char mount_char[3] = "MM";
    char day_char[3] = "DD";
    char iso_n[9] = "ISO 8601";
    char formato[7] = "format";

    printf("%d-%d-%d - %s-%s-%s %s -%s\n",year,mounth,day,years_char,mount_char,day_char,formato,iso_n);
    printf("%d-%d-%d - %s-%s-%s %s\n",mounth,day,year,mount_char,day_char,years_char,formato );
    printf("%d-%d-%d - %s-%s-%s %s\n",day,mounth,year,day_char,mount_char,years_char,formato);

    char d = 'D';
    char m = 'M';
    char y = 'Y';
    int mese = 2;
    printf("%d-%d-%d - %c-%c-%c %s\n",day,mese,year,d,m,y,formato);



    return 0;
}