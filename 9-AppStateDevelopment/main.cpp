#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <chrono>
#include <thread>
#include "slots.h"

using namespace std;

int money;
bool gameOver;

void setup() 
{
	money = 10000;
	gameOver = false;

	cout << "Welcome to the Casino! Please try our new slot machines, they just came in!" << endl;
	cout << "$50 a spin!\n";

	cout << "You have $" << money << '\n';
	system("pause");
	system("cls");
}

int main() 
{
	setup();

	while (gameOver == false) 
	{
		srand(time(NULL));
		int num1, num2, num3, num4, num5;
		num1 = rand() % 9 + 1;
		num2 = rand() % 9 + 1;
		num3 = rand() % 9 + 1;
		num4 = rand() % 9 + 1;
		num5 = rand() % 9 + 1;
		
		money -= 50;
		cout << "You span the slot machine!\n";
		cout << "You spent $50\n";
		int jackpot[] = { num1, num2, num3, num4, num5 };
		money += findWinnings(jackpot, 5);
		drawScreen(money, num1, num2, num3, num4, num5);

		this_thread::sleep_for(chrono::milliseconds(1000));
		system("pause");
		system("CLS");
	}
}