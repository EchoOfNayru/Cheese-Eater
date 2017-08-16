#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "dtgreet.h"
#include "func.h"
#include "mathutils.h"

using namespace std;

void dayGreeting(int month, int day, int year) 
{
	cout << "Hello World! today is " << month << "/" << day << "/" << year << endl;
	if (isLeapYear(year)) 
	{
		cout << "This year is a leap year" << endl;
	}
}

void timeGreeting(int hours, int minutes) 
{
	cout << "Hello World! the time right now is " << hours << " hours and " << minutes << " minutes!" << endl;
}

bool isLeapYear(int year) 
{
	if (year % 4 == 0) 
	{
		return true;
	}
	else 
	{
		return false;
	}
}