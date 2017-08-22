#pragma once

struct Vector2d
{
	float x;
	float y;
};

//Returns the sum of 2 vectors
Vector2d addVectors(Vector2d a, Vector2d b);

//Returns the difference between 2 vectors
Vector2d differenceVectors(Vector2d a, Vector2d b);

//Returns the distance between 2 vectors
float distanceVectors(Vector2d a, Vector2d b);