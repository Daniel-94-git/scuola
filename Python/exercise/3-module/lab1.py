# finding the largest of three numbers */


# the three numbers 
number1 = 0
number2 = 0
number3 = 0

# we will save the largest number here */
max = 0

# read three numbers */
number1= int(input("number: "))
number2= int(input("number: "))
number3= int(input("number: "))


# we temporarily assume that the first number is the largest one */
# we will check it soon */
max = number1

# we check if the second value is the largest */
if(number2 > max):
    max = number2

# we check if the third value is the largest */
if(number3 > max):
    max = number3

# we print the result */
print("The largest number is : ",max)

