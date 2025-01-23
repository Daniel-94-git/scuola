'''
Level of difficulty
Easy

Objectives
Familiarize the student with:

Character types and values
Fixing errors in a program
Printing on screen
Scenario
Check the program below. Find all possible compilation errors and logic errors. Fix them, but you may not change any character values. 
You may change variable names. Your version of the program must print the same result as the expected output. Before you use your compiler, try to find the errors only by manual code analysis.

Expected output
Upper case letters beetween (and with) 'Z' and 'A' is : 26
Lower case letters beetween (and with) 'z' and 'a' is : 26
'''




firstLetter = 'A'
firstSmallLetter = 'a'
lastLetter = 'Z'
lastSmallLetter = 'z'

print("Upper case letters beetween (and with) : ", lastLetter ," and : ", firstLetter ," is : ", ord(firstLetter) - ord(lastLetter) + 51)
print("Lower case letters beetween (and with) : ", lastSmallLetter , " and : ", firstSmallLetter , " is : ",ord(lastSmallLetter) - ord(firstSmallLetter) + 1)	

