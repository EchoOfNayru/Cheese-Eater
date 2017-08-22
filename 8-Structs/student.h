#pragma once

struct student
{
	int studentID;
	int course;
	int lastExam;
};

// Prints all the available data of a student
void printStudent(student person);

// Average test scores for students in an array
int studentAverage(student scholars[], int size);

// Median test score for students in an array
int studentMedian(student scholars[], int size);

// returns the number of students in a course in an array
int studentsCourse(student scholars[], int size, int course);