'''
Estimated time
10-15 minutes

Level of difficulty
Easy

Objectives
improving the student's skills in defining, using and testing functions.
Scenario
A car's fuel consumption may be expressed in many different ways. 
For example, in Europe, it is shown as the amount of fuel consumed per 100 kilometers.

In the USA, it is shown as the number of miles traveled by a car using one gallon of fuel.

Your task is to write a pair of functions converting l/100km into mpg, and vice versa.

The functions:

are named liters_100km_to_miles_gallon and miles_gallon_to_liters_100km respectively;
take one argument (the value corresponding to their names)
Complete the code in the editor.

Run your code and check whether your output is the same as ours.

Here is some information to help you:

1 American mile = 1609.344 metres;
1 American gallon = 3.785411784 litres.
Expected output
60.31143162393162
31.36194444444444
23.52145833333333
3.9007393587617467
7.490910297239916
10.009131205673757
'''

# kilometri in galloni

def liters_100km_to_miles_gallon(liters):
    
    convert = 100 / liters
    da_litri_a_galloni = convert * 3.785411784
    miglia = da_litri_a_galloni / 1.609344
    
    return miglia
    
    
    

# galloni in kilometri

def miles_gallon_to_liters_100km(miles):
    
    km = miles / 3.785411784
    da_miglia_a_km = km * 1.609344
    l_km = 100 / da_miglia_a_km
    
    return l_km

print(liters_100km_to_miles_gallon(3.9))
print(liters_100km_to_miles_gallon(7.5))
print(liters_100km_to_miles_gallon(10.))
print(miles_gallon_to_liters_100km(60.3))
print(miles_gallon_to_liters_100km(31.4))
print(miles_gallon_to_liters_100km(23.5))
