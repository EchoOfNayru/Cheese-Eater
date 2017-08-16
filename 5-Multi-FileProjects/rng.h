#pragma once

// takes in an int to seed a rng
void seedRng(int seed);

// gives a random number between 1 and 100
int rng();

//gives a random nubmer between lower and upper
int rngRange(int lower, int upper);

//generates a random booleans
bool rngB();

//generatoes a random bool based on the chance given
bool rngbChance(int chance);