#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <chrono>
#include <thread>
#include "slots.h"

using namespace std;

void drawScreen(int foodStuffs, int number1, int number2, int number3, int  number4, int number5)
{
	cout << '\n';
	cout << "you have $" << foodStuffs << "." << endl;
	cout << '\n';
	cout << '\n';
	cout << " _____________________________   /-\\\n";
	cout << "/                             \\  \\ /" << endl;
	cout << "| ___   ___   ___   ___   ___ |  | |\n";
	cout << "||   | |   | |   | |   | |   ||__| |\n";
	cout << "|| " << number1 << " | | " << number2 << " | | " << number3 << " | | " << number4 << " | | " << number5 << " ||____/\n";
	cout << "||___| |___| |___| |___| |___||\n";
	cout << "|                             |\n";
	cout << "|                             |\n";
	cout << "\\____________________________/" << endl;
}

int findWinnings(int array[], int size)
{
	int sameRoll = 0;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (j == i)
			{

			}
			else if (array[j] == array[i])
			{
				sameRoll++;
			}
		}
	}

	if (sameRoll >= 1)
	{
		cout << '\n';
		if (sameRoll == 20)
		{
			cout << "JACKPOT!!!\n";
			cout << "$2500 gained\n";
			return 2500;
		}
		if (sameRoll == 9)
		{
			cout << "C-C-C-C-C-C-COMBO!\n";
			cout << "$1000 gained\n";
			return 1000;
		}
		if (sameRoll == 6)
		{
			cout << "Three of a kind!\n";
			cout << "$300 gained\n";
			return 300;
		}
		if (sameRoll == 2)
		{
			cout << "pair!\n";
			cout << "$70 gained\n";
			return 70;
		}
	}

	return 0;
}
