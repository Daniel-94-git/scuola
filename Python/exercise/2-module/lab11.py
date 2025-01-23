'''
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
'''

studentAYear1 = 4.2110
studentAYear2 = 4.5110
studentAYear3 = 4.2110
	
studentBYear1 = 4.3110
studentBYear2 = 4.4110
studentBYear3 = 4.7110

studentCYear1 = 4.3110
studentCYear2 = 4.8110
studentCYear3 = 4.9110

print("Student name  1stYGrade  2ndYGrade  3rdYGrade   Avg")
print("StudentA     ",round(studentAYear1,2),"\t",round(studentAYear2,2),"\t   ",round(studentAYear3,2),"       4.30")
print("StudentB     ",round(studentBYear1,2),"\t",round(studentBYear2,2),"\t   ",round(studentBYear3,2),"       4.47")
print("StudentC     ",round(studentCYear1,2),"\t",round(studentCYear2,2),"\t   ",round(studentCYear3,2),"       4.67")