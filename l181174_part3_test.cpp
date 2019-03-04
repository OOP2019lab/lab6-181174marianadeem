#include "pch.h"
#include <iostream>
#include"student.h"
using namespace std;

void printStudentArray(student s[],int size)
{
	for (int i = 0;i < size;i++)
	{
		s[i].print();
		int qt = s[i].getquizTaken();
		for (int j = 0;j < qt;i++)
		{
			cout << "test number" << j << "score:" << s[i].getquizTaken[j];
		}
	}
}
void myswap(student x, student y)
{
	student temp;
	temp = x;
	x = y;
	y = temp;
}
void sortedwrtGpa(student s[],int size)
{
	for (int i = 0;i < size;i++)
	{
		for (int j = i+1;i < size;i++)
		{
			float gpa1 = s[i].getGPA;
			float gpa2 = s[j].getGPA;
			if (gpa1 > gpa2)
			{
				swap(s[i].getGPA, s[j].getGPA);
			}
		}
	}
}
student* filteredStudents(student s[], int size)
{
	int count = 0;
	student * s1 = new student[count];
	for (int i = 0;i < size;i++)
	{
		float gpa = s[i].getGPA;
		if (gpa > 2.0)//counting the number of students having less than 2.0 gpa
		{
			count++;
		}
		for (int i = 0;i < count;i++)
		{
			s1[i] = s[i];
		}
	}
	return s1;
}

void main() 
{

	student array1[3] = 
	{
		student(3,1.3),student(3,4.0),student(3,2.9)//allocating the gpa and test size
	};
	array1[0].addQuizScore(2);//assigning quiz scores
	array1[0].addQuizScore(4);
	array1[0].addQuizScore(8);
	array1[1].addQuizScore(7);
	array1[1].addQuizScore(6);
	array1[1].addQuizScore(3);
	array1[2].addQuizScore(7);
	array1[2].addQuizScore(8);
	array1[2].addQuizScore(10);
	printStudentArray(array1, 3);
	student array2[4] =
	{
		student(4,3.3),student(2,4.3),student(3,3.9),student(4,2.5)//allocating the gpa and test size for student array of size 4
	};
	for (int i = 0;i < 4;i++)
	{
		int qt = array2[i].getquizTaken();
		for (int j = 0;j < qt;j++)
		{
			array2[i].addQuizScore(3.2);
		}
	}
	printStudentArray(array2,4);
	student *s1 = filteredStudents(array1, 3);
	sortedwrtGpa(array1, 3);
	printStudentArray(array1, 3);
}