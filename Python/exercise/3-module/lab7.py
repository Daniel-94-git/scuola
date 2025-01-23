'''

Level of difficulty
Easy

Objectives
Familiarize the student with:

Logic of loops: for
Inverting logic of for loops
Getting input from the user
Printing characters on screen
Scenario
Write a program that asks the user to enter a number, and prints twice as many lines as the number inputted.

The first half of every other line contains one * character at the start, as many spaces as the number of this line (line numbers count from 0 in this task) and one * character at the end of the line. The second half is a mirror reflection of the first.

The outputted "drawing" should be similar to an arrowhead.

Your version of the program must print the same result as the expected output. To do this task, you should use two outer for loops and two inner for loops.

You shouldn't use any special formatting in the printf to print the spaces - just use the for loop.

Two exceptions:

when the user inputs a number less than or equal to 1, the program doesn't print any line.
when the user inputs a number greater than 20, the program prints only forty lines.
Sample input
3

Expected output
**
* *
*  *
*  *
* *
**

Sample input
9

Expected output
**
*   *
*    *
*     *
*      *
*       *
*        *
*         *
*          *
*          *
*         *
*        *
*       *
*      *
*     *
*    *
*   *
**


'''

number = int(input("Insert: "))

if(number <= 1):
    print("The number in not valid!")
    
elif(number >=2 and number <= 20):
    
    for i in range(0,number):
        
        i= i+1
        print("*",end="")
        
        for j in range(0,i):
            print(" ",end="")
            j = j+1
            
        print("*")
        
    for i in range(number,0,-1):
        
        print("*",end="")
        
        for j in range(0,i):
            print(" ",end="")
            j = j+1
        
        print("*")
        
elif(number > 21):
    for i in range(0,20):
        
        i= i+1
        print("*",end="")
        
        for j in range(0,i):
            print(" ",end="")
            j = j+1
            
        print("*")
        
    for i in range(20,0,-1):
        
        print("*",end="")
        
        for j in range(0,i):
            print(" ",end="")
            j = j+1
        
        print("*")