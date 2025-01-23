/*
Level of difficulty
Easy

Objectives
Familiarize the student with:

Printing data in different formats
Fixing errors in a program
Scenario
You have the data (included in code) of three students' grades (StudentA, StudentB, StudentC).
Write a program to print this data in rows - the first row is a header in the format:

Student name  1stYGrade  2ndYGrade  3rdYGrade  Avg

The next three rows contain: student name (StudentA, StudentB, StudentC is enough),
grade (1stYGrade 2ndYGrade 3rdYGrade), and the average of these three grades (Avg).
Your version of the program must print the same result as the expected output.

To print only two digits of a floating-point number, use the "%.2f" format specifier,
and to fill it with spaces you can use the "%9.2f" format specifier where 9 is the length of
the number and spaces.

Expected output

Student name  1stYGrade  2ndYGrade  3rdYGrade  Avg
StudentA      4.20       4.50       4.20       4.30
StudentB      4.30       4.40       4.70       4.47
StudentC      4.30       4.80       4.90       4.67
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float studentAYear1 = 4.2;
	float studentAYear2 = 4.5;
	float studentAYear3 = 4.2;
	
	float studentBYear1 = 4.3;
	float studentBYear2 = 4.4;
	float studentBYear3 = 4.7;
	
	float studentCYear1 = 4.3;
	float studentCYear2 = 4.8;
	float studentCYear3 = 4.9;
    float mediaA;
    float mediaB;
    float mediaC;

    mediaA = (studentAYear1+studentAYear2+studentAYear3)/3;
	mediaB = (studentBYear1+studentBYear2+studentBYear3)/3;
    mediaC = (studentCYear1+studentCYear2+studentCYear3)/3;
/*
Student name  1stYGrade  2ndYGrade  3rdYGrade  Avg
StudentA      4.20       4.50       4.20       4.30
StudentB      4.30       4.40       4.70       4.47
StudentC      4.30       4.80       4.90       4.67*/

cout<<"Student name 1stYGrade  2ndYGrade  3rdYGrade  Avg"<<endl;
cout<<"SudentA      "<<studentAYear1<<"        "<<studentAYear2<<"        "<<studentAYear3<<"        "<<fixed<<setprecision(2)<<mediaA<<endl;
cout<<"SudentB      "<<studentBYear1<<"       "<<studentBYear2<<"       "<<studentBYear3<<"       "<<fixed<<setprecision(2)<<mediaB<<endl;
cout<<"SudentA      "<<studentCYear1<<"       "<<studentCYear2<<"       "<<studentCYear3<<"       "<<fixed<<setprecision(2)<<mediaC<<endl;


	return 0;
}