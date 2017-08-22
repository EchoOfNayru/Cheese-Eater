#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "Vector2d.h"

using namespace std;

Vector2d addVectors(Vector2d a, Vector2d b)
{
	Vector2d retval;
	retval.x = a.x + b.x;
	retval.y = a.y + b.y;
	return retval;
}

Vector2d differenceVectors(Vector2d a, Vector2d b)
{
	Vector2d retval;
	if (a.x > b.x) 
	{
		retval.x = a.x - b.x;
	}
	else 
	{
		retval.x = b.x - a.x;
	}
	if (a.y > b.y) 
	{
		retval.y = a.y - b.y;
	}
	else 
	{
		retval.y = b.y - a.y;
	}
	return retval;
}

float distanceVectors(Vector2d a, Vector2d b)
{
	return sqrt(((a.x - b.x)*(a.x - b.x)) + ((a.y - b.y)*(a.y - b.y)));
}
