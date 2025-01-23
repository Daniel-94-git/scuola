/*
Level of difficulty
Easy

Objectives
Familiarize the student with:

Using operators,
Building simple expressions,
Translating verbal description into programming language
Scenario
Take a look at the code we've provided in the editor: it assigns two integer values, manipulates them and finally outputs the result and bigresult variables.

The problem is that the manipulations have been described using natural language, so the code is completely useless now.

We want you to act as an intelligent (naturally!) compiler and to translate the formula into a real "C" code notation.

Test your code using the data we've provided.

Expected output
result: 38
big result: 54872
*/




#include <iostream>


using namespace std;

int main(void) 
{
	int xValue=5;
	int yValue=9;
	int result;
	int bigResult;
	
	 
	//	increment xValue by 3

	xValue = xValue + 3;

	//	decrement yValue by xValue

	yValue = yValue - xValue;

	//	multiply xValue times yValue giving result

	result = xValue * yValue;

	//	increment result by result

	result = result + result;

	//	decrement result by 1

	result = result - 1;

	//	assign result modulo result to yValue

	yValue = (result % result);

	//	increment result by result added to xValue

	result = result + result + xValue;

	//	assign result times result times result to bigResult

	bigResult = result * result *result;

	//	increment result by xValue times yValue

	result =result + (xValue * yValue);
	
	cout<< "Result : " << result << endl ;
	cout<< "Big result : " << bigResult << endl;
	
	return 0;
}