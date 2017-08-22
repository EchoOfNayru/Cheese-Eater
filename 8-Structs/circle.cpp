#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "circle.h"
#include "Vector2d.h"

using namespace std;

bool collisionCheck(circle a, circle b)
{
	if (distanceVectors(a.center, b.center) <= (a.radius + b.radius)) 
	{
		return true;
	}
	return false;
}
