#pragma once

struct player
{
	int health;
	int attack;
	int defense;
};

struct zombie
{
	int health;
	int attack;
	int defense;
};

void Battle(player p, zombie z);