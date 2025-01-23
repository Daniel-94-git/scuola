'''
Level of difficulty
Easy

Objectives
Familiarize the student with:

Printing data in different formats
Fixing errors in a program
Scenario
According to ISO 8601, many countries use the YYYY-MM-DD date format, where YYYY is a four-digit year,
MM means a two-digit month, and DD means a two-digit day (one letter means no leading zeros).
Local conventions can vary, and sometimes include formats like DD-MM-YYYY or MM-DD-YYYY.

Your task is to print values in four different formats. Check the program in the editor.

Find all possible compilation errors and logic errors.
Fix them, but do not change any character values. Your version of the program must print the same result as the expected output.

Before you use the compiler, try to find the errors only by manual code analysis.

Expected output
2016-02-20 - YYYY-MM-DD format - ISO 8601
02-20-2016 - MM-DD-YYYY format
20-02-2016 - DD-MM-YYYY format
20-2-2016 - D-M-Y format

'''

years = 2016
mounth = "02"
day = 20

anno ="YYYY"
mese ="MM"
giorno = "DD"
format = "format"
iso = "ISO 8601"

m = 'M'
y = 'Y'
d = 'D' 

print(years,"-",mounth,"-",day," - ",anno,"-",mese,"-",giorno," ",format," - ",iso)
print(mounth,"-",day,"-",years," - ",mese,"-",giorno,"-",anno," ",format)
print(day,"-",mounth,"-",years," - ",giorno,"-",mese,"-",anno," ",format)
print(day,"-",mounth,"-",years," - ",d,"-",m,"-",y," ",format)

