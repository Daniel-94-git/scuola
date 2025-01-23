'''
Level of difficulty
Easy

Objectives
Familiarize the student with:

Working with the switch-case statement
Printing on screen
Scenario
Write a program that asks the user to enter the number of a month, and prints the name of that month on the screen.

When the number does not correspond to a month (less than 1 or greater than 12), the program prints: Error: no such month in my calendar..

If you can't remember all the names (and of course to speed up your programming), here is a list:

1 : January
2 : February
3 : March
4 : April
5 : May
6 : June
7 : July
8 : August
9 : September
10 : October
11 : November
12 : December
Your version of the program must print the same result as the expected output.

Sample Input
12

Expected output
December

Sample Input
2

Expected output
February

Sample Input
15

Expected output
Error: no such month in my calendar.


'''





i = int(input("Insert a number : "))
match(i): 
    case 1: 
        print("January")
    case 2 : 
        print("February")
    case 3 : 
        print("March")
    case 4 : 
        print("April")
    case 5 : 
        print("May")
    case 6 : 
        print("June")
    case 7 : 
        print("July")
    case 8 : 
        print("August")
    case 9 : 
        print("September")
    case 10 : 
        print("October")
    case 11 : 
        print("November")
    case 12 : 
        print("December")
    case _: 
        print("Error: no such month in my calendar.")

