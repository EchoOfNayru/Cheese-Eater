#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "func.h"
#include "dtgreet.h"
#include "mathutils.h"
#include "rng.h"

using namespace std;

void seedRng(int seed) 
{
	srand(seed);
}

int rng() 
{
	return rand() % 100 + 1;
}

int rngRange(int lower, int upper) 
{
	return rand() % upper + lower;
}

bool rngB() 
{
	int mark = rng();
	if (mark > 50) 
	{
		return true;
	}
	else 
	{
		return false;
	}
}

bool rngbChance(int chance) 
{
	int mark = rng();
	if (mark > chance) 
	{
		return true;
	}
	else 
	{
		return false;
	}
}