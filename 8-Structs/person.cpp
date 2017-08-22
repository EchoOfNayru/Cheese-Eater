#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "person.h"

using namespace std;

void printPerson(person target) 
{
	cout << "Person\n";
	cout << "	Age:" << target.age << "\n";
	cout << "	Csh:" << target.cash << "\n";
	cout << "	Pts:" << target.points << "\n";
}