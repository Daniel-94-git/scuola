'''
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
'''

dayOfWeek = int(input("Insert number between 1 and 7: "))

match(dayOfWeek):
    case 1:
        print("The day of week is: Monday")
    case 2:
        print("The day of week is: Tuensday")
    case 3:
        print("The day of week is: Wensday")
    case 4:
        print("The day of week is: Thursday")
    case 5:
        print("The day of week is: Friday")
    case 6:
        print("The day of week is: Saturdaay")
    case 7:
        print("The day of week is: Sunday")
        
if(dayOfWeek <=0 ):
    print("Invalid input. Please enter a number between 1 and 7.")
    print("There is no such day: ",dayOfWeek,". Input value must be from 1 to 7.")
    
if(dayOfWeek >= 8):
    print("Invalid input. Please enter a number between 1 and 7.")