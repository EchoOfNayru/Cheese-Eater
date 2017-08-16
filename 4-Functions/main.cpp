#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

/*
	bool isLeapYear(int year)
	{
		return year % 4 == 0; // returns true (1) or false (0)
	}
*/

using namespace std;
int leapYear = 0;

void isLeapYear(int year)
{
	if (year % 4 == 0)
	{
		leapYear = 1;
	}
	else 
	{
		leapYear = 0;
	}
}

void printGreeting(int month, int day, int year)
{
	cout << "Hello AIE!" << endl;
	cout << "Today is " << month << "/" << day << "/" << year << endl;
	isLeapYear(year);
	if (leapYear == 1) {
		cout << "This year is a leap year!" << endl;
	}

	/*
	if(isLeapYear(year))
	{
		cout << "This year is a leap year!" << endl;
	}
	*/
}

// walkthrough
int sumOfTwoInts(int a, int b)
{
	return a + b;
}

//Closed 1 -- Function Prototypes
void helloFunction() 
{
	cout << "Hello Functions!" << endl;
}

int squareOfInt(int a) 
{
	return a * a;
}

float fractionToDecimal(float a, float b) 
{
	return a / b;
}

float biggestDifference(float a, float b, float c) 
{
	if (a > b && a > c) {
		return a;
	}
	else if (b > a && b > c)
	{
		return b;
	}
	else if (c > a && c > b) 
	{
		return c;
	}
}

//Closed 2 -- function definitions
void printTwoNumbers(int a, int b) 
{
	cout << a << "," << b << endl;
}

//Closed 3 -- sum of three intergers
int sumOfThreeIntergers(int a, int b, int c) 
{
	return a + b + c;
}

//Open 1 -- min
int min(int a, int b) 
{
	if (a > b) 
	{
		return b;
	}
	else if (a < b) 
	{
		return a;
	}
	else if (a == b) 
	{
		return a;
	}
}

//Open 2 -- max
int max(int a, int b) 
{
	if (a > b) 
	{
		return a;
	}
	else if (a < b) 
	{
		return b;
	}
	else if (a == b) 
	{
		return a;
	}
}

//Open 3 -- clamp
//a is low value, b is high value, c is return vlaue
//int clamp(int a, int b, int c) 
//{
//	if (c < a) 
//	{
//		c = a;
//	}
//	else if (c > b) 
//	{
//		c = b;
//	}
//
//	return c;
//}

//Open 4 -- distance
float distance(int x1, int y1, int x2, int y2) 
{
	return sqrt(squareOfInt((x1 - x2)) + squareOfInt((y1 - y2)));
}

//Open 5 -- estimated time of arrival
float eta(int x1, int y1, int x2, int y2, int speed) 
{
	return distance(x1, y1, x2, y2) / speed;
}

//Challenge 1 -- Linear Interpolation
float linearInterpolation(float a, float b, float c) 
{
	if (c > 1) 
	{
		c = 1;
	}
	else if (c < 0) {
		c = 0;
	}

	return ((b - a) * c) + a;
}

//Challenge 2 -- clamp pt.2
int clamp(int a, int b, int c)
{
	c = min(b, c);
	c = max(a, c);

	return c;
}

//Challenge 3 -- High and Low game
void HighLow() 
{
	srand(time(NULL));
	
	int answer = rand() % 100 + 1;
	int guess = 0;

	//cout << answer << endl;

	for (int i = 0; i < 5; i++) 
	{
		bool isWon = false;
		bool IsEntered = false;
		while (IsEntered == false)
		{

			cout << "What is your guess?" << endl;
			cin >> guess;
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			if (guess == answer) 
			{
				IsEntered = true;
				isWon = true;
				i = 5;
				cout << "That's the right answer!" << endl;
			}
			else if (guess > 1 && guess < 100)
			{
				IsEntered = true;
				if (answer > guess) 
				{
					cout << "Your guess is wrong. The answer is higher!" << endl;
				}
				else 
				{
					cout << "Your guess is wrong. The answer is lower!" << endl;
				}
			}
			else
			{
				cout << "that's not a real answer!" << endl;
			}
		}
		if (i == 4 && isWon != true) 
		{
			cout << "better luck next time!" << endl;
		}
	}
}


int main() 
{

	for (int i = 0; i < 1; i++) 
	{
		printGreeting(8, 15, 2017);
	}

	int a = 56;
	int b = 82;

	int sum = sumOfTwoInts(a, b);

	cout << sum << endl;

	helloFunction();

	cout << squareOfInt(2) << endl;

	cout << fractionToDecimal(8, 40) << endl;

	cout << biggestDifference(3.6, 7.8, 98.2) << endl;

	printTwoNumbers(2, 5);

	cout << sumOfThreeIntergers(1, 8, 3) << endl;

	cout << min(27357, 9234) << endl;
	cout << max(27357, 9234) << endl;

	cout << clamp(1, 100, 1000) << endl;

	cout << distance(1, 7, 5, 29) << endl;

	cout << eta(1, 7, 5, 29, 12) << endl;

	cout << linearInterpolation(26, 362, 0.5) << endl;

	HighLow();

	system("pause");
}

