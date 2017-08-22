#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "ZombieGame.h"

using namespace std;

void Battle(player p, zombie z)
{
	while (p.health > 0 && z.health > 0) 
	{
		cout << "You hit the zombie for " << p.attack - z.defense << " damage." << endl;
		z.health -= p.attack - z.defense;
		if (z.health <= 0) 
		{
			cout << "Congrats! The zombie has died." << endl;
			break;
		}
		cout << "The zombie hits you for " << z.attack - p.defense << " damage." << endl;
		p.health -= z.attack - p.defense;
		if (p.health <= 0) 
		{
			cout << "Oh no! you have died and turned into a zombie." << endl;
			break;
		}
		cout << "Player HP: " << p.health << endl;
		cout << "Zombie HP: " << z.health << endl;
		system("pause");
		cout << endl;
	}
}
