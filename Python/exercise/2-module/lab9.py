'''
Level of difficulty
Easy

Objectives
Familiarize the student with:

Conditions and conditional executions
Fixing errors in a program
Printing on screen
Scenario
Write a program that prints the name of a given day of the week.
Your program must print the same result as the expected output.

Test it for all days of the week (for now, test it only for valid values).

Expected output
The day of the week is: Monday
'''

dayOfWeek = int(input("Insert number (1/7): "))

if(dayOfWeek == 1):
    print("The day of the week is: Monday")
elif(dayOfWeek == 2):
    print("The day of the week is: Tuensday")
elif(dayOfWeek == 3):
    print("The day of the week is: Wensday")
elif(dayOfWeek == 4):
    print("The day of the week is: Thursday")
elif(dayOfWeek == 5):
    print("The day of the week is: Friday")
elif(dayOfWeek == 6):
    print("The day of the week is: Saturday")
elif(dayOfWeek == 7):
    print("The day of the week is: Sunday")