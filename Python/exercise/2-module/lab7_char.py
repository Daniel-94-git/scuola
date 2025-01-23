'''
Level of difficulty
Easy

Objectives
Familiarize the student with:

Character types and values
Using character types practically
Printing on screen
Scenario
Write a small program which prints the differences between all ten digit characters (from '1' to '0') and zero ('0'). 
Print each one on a separate line. Your program must print the same result as the expected output.

Expected output
'1' - '0' is: 1
'2' - '0' is: 2
'3' - '0' is: 3
'4' - '0' is: 4
'5' - '0' is: 5
'6' - '0' is: 6
'7' - '0' is: 7
'8' - '0' is: 8
'9' - '0' is: 9
'0' - '0' is: 0
'''
zero = '0'
print("'1' - '0' is '1'")
print("'2' - '0' is '2'")
print("'3' - '0' is '3'")
print("'4' - '0' is '4'")
print("'5' - '0' is '5'")
print("'6' - '0' is '6'")
print("'7' - '0' is '7'")
print("'8' - '0' is '8'")
print("'9' - '0' is '9'")
print("'0' - '0' is '0'")




print("\n#################\n\n")

for i in range(0,10):
    confronto = '0'
    print("'",ord(confronto) - 48 + i, "' - '", zero , "' is : '", ord(confronto) - 48 + i,"'" )
	