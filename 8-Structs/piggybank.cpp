#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "piggybank.h"

using namespace std;

float calcPiggybankNotes(piggybank piggy)
{
	float value = 0.0f;

	value = value + (piggy.ones * 1.0f);
	value = value + (piggy.twos * 2.0f);
	value = value + (piggy.fives * 5.0f);
	
	return value;
}

float calcPiggybankCoins(piggybank piggy)
{
	float value = 0.0f;

	value += (piggy.quarters * 0.25f);
	value += (piggy.dimes * 0.10f);
	value += (piggy.nickles * 0.05f);
	value += (piggy.pennies * 0.01f);
	
	return value;
}

float calcPiggybankTotal(piggybank piggy)
{
	float value = 0.0f;

	value += (piggy.ones * 1.0f);
	value += (piggy.twos * 2.0f);
	value += (piggy.fives * 5.0f);
	value += (piggy.quarters * 0.25f);
	value += (piggy.dimes * 0.10f);
	value += (piggy.nickles * 0.05f);
	value += (piggy.pennies * 0.01f);

	return value;
}
