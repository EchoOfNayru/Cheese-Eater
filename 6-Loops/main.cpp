#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

//Open 1 -- X to Y
void printXY(int x, int y) 
{
	cout << "start?" << endl;
	cin >> x;
	cout << "finish?" << endl;
	cin >> y;

	while (x <= y) 
	{
		cout << x << endl;
		x++;
	}
}

//Open 2 -- Largest of Any Number of Numbers
int promptLargest(int qtyRequested) 
{
	int userInput = 0;
	int largest = 0;

	for (int i = 0; i < qtyRequested; i++) 
	{
		cout << "give me a number." << endl;
		cin >> userInput;
		cout << userInput << endl;
		cin.clear();
		cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
		while (userInput == 0) 
		{
			cout << "that's not a valid number. please use a whole number" << endl;
			cin >> userInput;
			cin.clear();
			cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
		}
		if (userInput > largest) 
		{
			largest = userInput;
		}
	}

	return largest;
}

//Open 3 -- Smallest of Any Number of Numbers
int promptSmallest(int qtyRequested) 
{
	int userInput = 0;
	int smallest = 0;

	for (int i = 0; i < qtyRequested; i++) 
	{
		cout << "give me a number." << endl;
		cin >> userInput;
		cout << userInput << endl;
		cin.clear();
		cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
		while (userInput == 0)
		{
			cout << "that's not a valid number. please use a whole number" << endl;
			cin >> userInput;
			cin.clear();
			cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
		}
		if (userInput < smallest)
		{
			smallest = userInput;
		}
	}
	return smallest;
}

//Open 4 -- Even or Odd 2: Electric Boogaloo
void evenOrOdd(int start, int end) 
{
	cout << "what is the starting number?" << endl;
	cin >> start;
	cin.clear();
	cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
	while (start == 0) 
	{
		cout << "Invalid. Please input a number." << endl;
		cin >> start;
		cin.clear();
		cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
	}
	cout << "what is the ending number?" << endl;
	cin >> end;
	cin.clear();
	cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
	while (end == 0) 
	{
		cout << "Invalid. Please input a number." << endl;
		cin >> end;
		cin.clear();
		cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
	}
	
	while (start <= end) 
	{
		if (start % 2 == 0) 
		{
			cout << "even" << endl;
		}
		else 
		{
			cout << "odd" << endl;
		}
		start++;
	}
}

//Open 5 -- Fizz Buzz
void FizzBuzz(int start, int end) 
{
	cout << "what is the starting number?" << endl;
	cin >> start;
	cin.clear();
	cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
	while (start == 0)
	{
		cout << "Invalid. Please input a number." << endl;
		cin >> start;
		cin.clear();
		cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
	}
	cout << "what is the ending number?" << endl;
	cin >> end;
	cin.clear();
	cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
	while (end == 0)
	{
		cout << "Invalid. Please input a number." << endl;
		cin >> end;
		cin.clear();
		cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
	}

	while (start <= end)
	{
		if (start % 3 == 0 && start % 5 == 0) 
		{
			cout << "FizzBuzz!!" << endl;
		}
		else if (start % 3 == 0) 
		{
			cout << "Fizz!" << endl;
		}
		else if (start % 5 == 0) 
		{
			cout << "Buzz!" << endl;
		}
		else 
		{
			cout << start << endl;
		}
		start++;
	}
}

//Open 6 -- Grid Generator
void gridGen(int width, int height) 
{
	cout << "what is the width?" << endl;
	cin >> width;
	cin.clear();
	cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
	while (width <= 0 || width > 79)
	{
		cout << "Invalid. Please input a number." << endl;
		cin >> width;
		cin.clear();
		cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
	}
	cout << "what is the height?" << endl;
	cin >> height;
	cin.clear();
	cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
	while (height <= 0)
	{
		cout << "Invalid. Please input a number." << endl;
		cin >> height;
		cin.clear();
		cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
	}

	for (int i = 0; i < height; i++) 
	{
		for (int j = 0; j < width; j++) 
		{
			cout << "X";
		}
		cout << endl;
	}
}

//Open 7 -- Higher or Lower
void guessTheNumber(int lower, int upper, int tries) 
{
	//randomize seed
	srand(time(NULL));
	
	int answer = rand() % (upper - lower) + lower;
	int guess = 0;

	//cout << answer << endl;

	cout << "Hi there! I'm going to generate a number between "<< lower <<" and " << upper << ". you have 5 tries to guess it!" << endl;
	for (int i = 0; i < tries; i++) 
	{
		cout << "You have " << tries - i << " tries left. -- Make your guess!" << endl;
		cin >> guess;
		cin.clear();
		cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
		while (guess < lower || guess > upper) 
		{
			cout << "please guess within the range. you have "<< tries << " left." << endl;
			cin >> guess;
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		if (guess == answer) 
		{
			cout << "Congrats!! You have guessed the number!" << endl;
			break;
		}
		else if (i == tries - 1)
		{
			cout << "Try again next time! the answer was " << answer << "." << endl;
		}
		else if (guess > answer) 
		{
			/*tries--;
			if (tries == 0) 
			{
				cout << "Try again next time! the answer was " << answer << "." << endl;
				break;
			}*/
			cout << "Go Fish! The answer is lower." << endl;
		}
		else if (guess < answer) 
		{
			/*tries--;
			if (tries == 0) 
			{
				cout << "Try again next time! the answer was " << answer << "." << endl;
				break;
			}*/
			cout << "Go Fish! The answer is higher." << endl;
		}
	}
}

//Challenge 1 -- Fibonacci Sequence
void Fibonacci(int length) 
{
	int curNum = 1;
	int lastNum = 0;
	int hold = 0;
	
	cout << "how long?" << endl;
	cin >> length;
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	while (length <= 0) 
	{
		cout << "invalid. Please enter a number" << endl;
		cin >> length;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	for (int i = 0; i < length; i++) 
	{
		hold = curNum;
		curNum = curNum + lastNum;
		lastNum = hold;

		cout << curNum << endl;
	}
}

int main() 
{
	////Closed 1 -- 1 to 100
	//int num = 1;

	//for (int i = 0; i < 100; i++) 
	//{
	//	cout << num << endl;
	//	num++;
	//}

	////Closed 2 -- 100 - 1
	//num = 100;

	//while (num > 0)
	//{
	//	cout << num << endl;
	//	num--;
	//}

	////Closed 3 -- 1995 to 2017
	//num = 1995;

	//do 
	//{
	//	cout << num << endl;
	//	num++;
	//} while (num <= 2017);

	////Closed 4 -- Your Three Favorite Positive Numbers
	//int num1, num2, num3;
	//num1 = num2 = num3 = 0;

	//cout << "What are you 3 favorite numbers?" << endl;
	//cin >> num1;
	//while (num1 < 1) 
	//{
	//	cout << "That's not a positive number. Try again." << endl;
	//	cin >> num1;
	//}
	//cout << "Your current favorite number is " << num1 << ". What is your 2nd number?" << endl;
	//cin >> num2;
	//while (num2 < 1)
	//{
	//	cout << "That's not a positive number. Try again." << endl;
	//	cin >> num2;
	//}
	//cout << "Your current favorite numbers are " << num1 << " and " << num2 << ". What is your 3rd number?" << endl;
	//cin >> num3;
	//while (num3 < 1)
	//{
	//	cout << "That's not a positive number. Try again." << endl;
	//	cin >> num3;
	//}
	//cout << "Your favorite numbers are " << num1 << " and " << num2 << " and " << num3 << "." << endl;

	//printXY(0, 0);

	//cout << promptLargest(4) << endl;

	//cout << promptSmallest(4) << endl;

	//evenOrOdd(0, 0);

	//FizzBuzz(0, 0);

	//gridGen(0, 0);

	guessTheNumber(1, 100, 5);

	//Fibonacci(0);

	system("pause");
}