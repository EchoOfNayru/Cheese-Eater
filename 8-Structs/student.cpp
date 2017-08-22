#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "student.h"

using namespace std;

void printStudent(student person)
{
	cout << "Student ID: " << person.studentID << endl;
	cout << "	Course enrolled: " << person.course << endl;
	cout << "	Last Exam Score: " << person.lastExam << endl;
}

int studentAverage(student scholars[], int size)
{
	int total = 0;
	for (int i = 0; i < size; i++) 
	{
		total += scholars[i].lastExam;
	}
	return total / size;
}

int studentMedian(student scholars[], int size) 
{
	student temp;
	int median = 0;
	int flag = 1;
	for (int i = 0; i < size && flag == 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (scholars[j + 1].lastExam < scholars[j].lastExam)
			{
				temp = scholars[j];
				scholars[j] = scholars[j + 1];
				scholars[j + 1] = temp;
				flag = 1;
			}
		}
	}
	
	if (size % 2 == 0) 
	{
		median = scholars[size / 2 - 1].lastExam;
	}
	else 
	{
		median = scholars[size / 2].lastExam;
	}

	return median;
}

int studentsCourse(student scholars[], int size, int course)
{
	int total = 0;
	for (int i = 0; i < size; i++) 
	{
		if (scholars[i].course == course) 
		{
			total++;
		}
	}
	return total;
}
