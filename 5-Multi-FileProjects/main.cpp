#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "func.h"
#include "mathutils.h"
#include "dtgreet.h"
#include "rng.h"
#include <chrono>
#include <thread>
#include <Windows.h>

using namespace std;

void stuff() 
{
	this_thread::sleep_for(chrono::milliseconds(3000));
}

int main()
{
	HANDLE hConsole;
	int k;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	for (k = 1; k < 5 + 1; k++) 
	{
		SetConsoleTextAttribute(hConsole, k);
		cout << k << " Hello World!" << endl;
	}

	system("pause");
	
	//cout << sum(1, 4) << endl;

	dayGreeting(5, 4, 2024);
	timeGreeting(5, 25);

	stuff();

	seedRng(time(NULL));
	cout << rng() << endl;
	cout << rngB() << endl;
	cout << rngbChance(20) << endl;

	system("pause");
}