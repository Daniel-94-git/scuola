/*
Level of difficulty
Easy

Objectives
Familiarize the student with:

Getting data from the user
Validating the input
Processing the data
Printing data in different formats
Fixing errors in a program
Scenario
Write a program that prints the name of a given day of the week.
Your program must print the same result as the expected output.
This task is similar to the previous lab, but this time you have to get the
day of the week from the user and validate the input.

Test the program for all the days of the week
(add code to print a message to the user when he/she enters an invalid day of the week).

Sample Input
Enter the day of the week (1-7): 1

Sample output
The day of week is: Monday

Sample Input
Enter the day of the week (1-7): 2

Sample output
The day of week is: Tuesday

Sample Input
Enter the day of the week (1-7): 9

Sample output
Invalid input. Please enter a number between 1 and 7.

Sample Input
Enter the day of the week (1-7): -1

Sample output
Invalid input. Please enter a number between 1 and 7.
There is no such day: -1. Input value must be from 1 to 7.



*/

#include <stdio.h>

int main(){

    int dayOfWeek = 0;
    char flag = 'O';

    while (flag=='O')
    {
        printf("Enter the day of the week (1-7): ");
        scanf("%d",&dayOfWeek);

        if(dayOfWeek == 1){
            printf("The day of week is: Monday\n");
            
        }
        else if (dayOfWeek == 2)
        {
            printf("The day of week is: Tuesday\n");
        }
        else if (dayOfWeek == 3)
        {
            printf("The day of week is: Wednesday\n");
        }
        else if (dayOfWeek == 4)
        {
            printf("The day of week is: Thursday\n");
        }
        else if (dayOfWeek == 5)
        {
            printf("The day of week is: Friday\n");
        }
        else if (dayOfWeek == 6)
        {
            printf("The day of week is: Saturday\n");
        }
        else if (dayOfWeek == 7)
        {
            printf("The day of week is: Sunday\n");
        }
        else if (dayOfWeek > 7)
        {
            printf("Invalid input. Please enter a number between 1 and 7.\n");
        }
        else if (dayOfWeek < 0)
        {
            printf("Invalid input. Please enter a number between 1 and 7.\n");
            printf("is no such day: %d. Input value must be from 1 to 7.\n",dayOfWeek);
        }
        
    }
    


    return 0;
}