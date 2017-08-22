#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "person.h"
#include "piggybank.h"
#include "student.h"
#include "Vector2d.h"
#include "ZombieGame.h"
#include "circle.h"

using namespace std;

int main()
{
	/*person me;
	me.age = 18;
	me.cash = 120.0f;
	me.points = 150;

	person you{ 22, 35.0f, 150 };

	printPerson(me);
	printPerson(you);*/

	//piggybank superpig{ 5, 2, 4, 7, 3, 7, 2 };

	//cout << calcPiggybankTotal(superpig) << "\n";

	/*student a{ 1, 1, 100};
	student b{ 2, 1, 98};
	student c{ 3, 2, 83};
	student d{ 4, 2, 92};
	student e{ 5, 2, 100 };

	student students[]{a, b, c, d, e};

	cout << studentAverage(students, 5) << endl;
	cout << studentMedian(students, 5) << endl;
	cout << studentsCourse(students, 5, 2) << endl;*/

	Vector2d a{ 2, 3 };
	Vector2d b{ 2, 4 };

	//cout << distanceVectors( a, b) << endl;*/

	/*player p{ 100, 20, 10 };
	zombie z{ 40, 15, 5 };

	Battle(p, z);*/

	circle cirA{a, 1};
	circle cirB{b, 1};

	cout << collisionCheck(cirA, cirB) << endl;

	system("pause");
}