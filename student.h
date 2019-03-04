#include "stdafx.h"
#include<iostream>

using namespace std;

class student {
private:
	static int counter;
	int ID;
	float *quizScore;
	int quizCapacity;
	int quizTaken;
	float GPA;
public:
	student();
	student(int quizcapacity,float GPA);
	student(const student &);
	~student();
	//functions
	void addQuizScore(float );
	void setGPA(float&);
	float getGPA()const;
	void print()const;
	bool compare(student);
	void updateScore(int,float);
};
//int student::counter=1;
