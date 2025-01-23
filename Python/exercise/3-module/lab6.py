'''
Level of difficulty
Easy

Objectives
Familiarize the student with:

Logic of loops: do - while
Getting input from the user
Printing characters on screen
Scenario
Write a program that asks the user to enter a number. Then:

the program should print the number of lines corresponding to the number inputted;
each line should contain the number of pairs of characters *# equal to the number of this line.
The outputted "drawing" should be similar to the right half of a pyramid.

Your version of the program must print the same result as the expected output. To do this lab, you must use two do-while loops.

However:

when the user inputs a number less than or equal to 1, the program should print only one line;
When the user inputs a number greater than 20, the program should print only twenty lines.
Sample Input
3

Expected output
*#
*#*#
*#*#*#

Sample Input
5

Expected output
*#
*#*#
*#*#*#
*#*#*#*#
*#*#*#*#*#

Sample Input
0

Expected output
*#
'''

line = int(input("Insert number line :"))

# IN PYTHON NON ESISTE IL DO WHILE



if (line <= 1):
    print("*#")
elif(line >= 2 and line <= 20):
    i = 0
    while(i<line):
    
        j = 0
        i = i +1
        while(j < i):
            j = j+1
            print("*#",end="")
        print("")
    
elif(line >= 21):
    i = 0
    while(i<20):
    
        j = 0
        i = i +1
        while(j < i):
            j = j+1
            print("*#",end="")
        print("")