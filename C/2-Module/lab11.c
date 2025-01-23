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

#include <stdio.h>

int main(){


    // studenteA voti :

    float votoA1 = 4.20;
    float votoA2 = 4.50;
    float votoA3 = 4.20;
    float avgA = 4.30;

    // studenteB voti :

    float votoB1 = 4.30;
    float votoB2 = 4.40;
    float votoB3 = 4.70;
    float avgB = 4.47;

    // studeteC voti :

    float votoC1 = 4.30;
    float votoC2 = 4.80;
    float votoC3 = 4.90;
    float avgC = 4.67;


    char angolo[50] = "Student name 1stYGrade  2ndYGrade  3rdGrade  Avg\n";

    char studenti[3][15] = {"StudentA" ,"StudentB","StudentC"};
    
    printf("%s",angolo);

    for (int i = 0; i < 3; i++)
    {
        if(i == 0){
            printf("%s",studenti[i]);
            printf("     %.2f\t%.2f\t   %.2f\t     %.2f\n",votoA1,votoA2,votoA3,avgA);
        }
        if(i == 1){
            printf("%s",studenti[i]);
            printf("     %.2f\t%.2f\t   %.2f\t     %.2f\n",votoB1,votoB2,votoB3,avgB);
        }
        if(i == 2){
            printf("%s",studenti[i]);
            printf("     %.2f\t%.2f\t   %.2f\t     %.2f\n",votoC1,votoC2,votoC3,avgC);
        }
        
    }
    


    return 0;
}