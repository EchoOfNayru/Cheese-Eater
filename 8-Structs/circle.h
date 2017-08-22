#pragma once
#include "Vector2d.h"

struct circle
{
	Vector2d center;
	float radius;
};

bool collisionCheck(circle a, circle b);