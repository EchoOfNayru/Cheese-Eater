#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;
 
//Closed 1 -- print numbers
void printNumbers(int nums[], int size) 
{
	for (int i = 0; i < size; i++) 
	{
		cout << nums[i] << endl;
	}
}

//Closed 2 -- sum of array
int sumNumber(int numbers[], int size) 
{
	int value = 0;
	for (int i = 0; i < size; i++) 
	{
		value += numbers[i];
	}
	cout << value << endl;
	return value;
}

//Closed 3 -- Smallest Value
int smallestValue(int numbers[], int size) 
{
	int value = 0;
	for (int i = 0; i < size; i++) 
	{
		if (i == 0) 
		{
			value = numbers[i];
		}
		else if (numbers[i] < value) 
		{
			value = numbers[i];
		}
	}
	cout << value << endl;
	return value;
}

//Closed 4 -- largest value 
int largestValue(int numbers[], int size) 
{
	int value = 0;
	for (int i = 0; i < size; i++) 
	{
		if (i == 0) 
		{
			value = numbers[i];
		}
		else if (numbers[i] > value)
		{
			value = numbers[i];
		}
	}
	cout << value << endl;
	return value;
}

//Open 1 -- find a value
int findIndex(int numbers[], int size, int value)
{
	bool isFound = false;
	for (int i = 0; i < size; i++)
	{
		if (numbers[i] == value)
		{
			return i;
		}
	}
	return -1;
}

//Open 2 -- Array Uniqueness
bool uniqueness(int numbers[], int size) 
{
	for (int i = 0; i < size; i++) 
	{
		for (int j = 0; j < size; j++) 
		{
			if (j == i) 
			{
				//j++;
			}
			else if (numbers[i] == numbers[j]) 
			{
				return false;
			}
		}
	}
	return true;
}

//Open 3 -- Reverse
void reverseArray(int numbers[], int size) 
{
	int loopSize = size / 2;
	int temp = 0;
	
	for (int i = 0; i < loopSize; i++) 
	{
		temp = numbers[i];
		numbers[i] = numbers[size - i -1];
		numbers[size - i -1] = temp;
	}

	printNumbers(numbers, size);
}

//Open 4 -- bubblesort ascending
void bubbleSortAsc(int num[], int size) 
{
	int flag = 1;
	int temp = 0;

	for (int i = 0; i < size && flag == 1; i++) 
	{
		for (int j = 0; j < size - 1; j++) 
		{
			if (num[j + 1] < num[j]) 
			{
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
				flag = 1;
			}
		}
	}

	printNumbers(num, size);
}

//Open 5 -- bubblesort decending
void bubbleSortDec(int num[], int size)
{
	int flag = 1;
	int temp = 0;

	for (int i = 0; i < size && flag == 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (num[j + 1] > num[j])
			{
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
				flag = 1;
			}
			else 
			{
				flag = 0;
			}
		}
	}

	printNumbers(num, size);
}

int main() 
{
	int values[]{ 7, 9, 1, 5, 0};

	//printNumbers(values, 5);

	//sumNumber(values, 5);

	//smallestValue(values, 5);

	//cout << findIndex(values, 5, 9) << endl;

	//cout << uniqueness(values, 5) << endl;

	//reverseArray(values, 5);

	bubbleSortDec(values, 5);

	system("pause");
}