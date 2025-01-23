'''
/*    the program reads a sequence of numbers
      and counts how many numbers are even and odd;
      the program terminates when "0" is entered    */
'''

    # count the numbers here */
Evens = 0
Odds = 0

    # store the incoming numbers here */
Number = 1

    # read the first number */
number = int(input("number : "))
flag = 1
    # 0 terminates execution */
while(flag ==1 ):
    # check if the number is odd */
    if(Number % 2):
    # increase the odd counter */
        Odds= Odds+1
    else:
    # increase the even counter */
        Evens= Evens+1
    # read the next number */
    number = int(input("number : "))
    if(number == 0):
        flag = 0
    
    # print results */
print("Even numbers: ", Evens)
print("Odd numbers: ", Odds)

