#pragma once

struct piggybank
{
	int ones;
	int twos;
	int fives;
	int quarters;
	int dimes;
	int nickles;
	int pennies;
};

// Returns the total value of the bills only
float calcPiggybankNotes(piggybank piggy);

// Returns the total value of the coins only
float calcPiggybankCoins(piggybank piggy);

//Returns the total monetary value of the piggybank
float calcPiggybankTotal(piggybank piggy);