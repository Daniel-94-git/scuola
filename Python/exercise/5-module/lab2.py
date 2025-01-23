'''
Your task is to write and test a function which takes two arguments (a year and a month) and returns the number of days 
for the given month/year pair (while only February is sensitive to the year value, your function should be universal).

The initial part of the function is ready. Now, convince the function to return None if its arguments don't make sense.

Of course, you can (and should) use the previously written and tested function (LAB 4.3.1.6). It may be very helpful. 
We encourage you to use a list filled with the months' lengths. 
You can create it inside the function - this trick will significantly shorten the code.

We've prepared a testing code. Expand it to include more test cases.

'''


def is_year_leap(year):
	if year%100 == 0 and year%400 == 0:
		year = True

	else:
		year = False

	return year

def days_in_month(year, month):
    
    
    bisestile = is_year_leap(year)
    
    match month:
        
        case 1: month = 31
        case 2: 
            
            if year:
                month = 29
            else:
                month = 28

        case 3: month = 31
        case 4: month = 30
        case 5: month = 31
        case 6: month = 30
        case 7: month = 31
        case 8: month = 31
        case 9: month = 30
        case 10: month = 31
        case 11: month = 30
        case 12: month = 31
        
    return month


test_years = [1900, 2000, 2016, 1987]
test_months = [2, 2, 1, 11]
test_results = [28, 29, 31, 30]
for i in range(len(test_years)):
	yr = test_years[i]
	mo = test_months[i]
	print(yr, mo, "->", end="")
	result = days_in_month(yr, mo)
	if result == test_results[i]:
		print("OK")
	else:
		print(None)
