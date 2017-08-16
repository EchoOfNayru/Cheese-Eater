#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "func.h"

using namespace std;

//see header file for defenitions

int min(int a, int b) 
{
	if (a > b) 
	{
		return b;
	}
	else 
	{
		return a;
	}
}

int max(int a, int b) 
{
	if (a < b) 
	{
		return b;
	}
	else 
	{
		return a;
	}
}

int clamp(int lower, int upper, int value) 
{
	if (value < lower) 
	{
		value = lower;
	}
	else if (value > upper) 
	{
		value = upper;
	}

	return value;
}

float dist(float x1, float y1, float x2, float y2) 
{
	return sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
}