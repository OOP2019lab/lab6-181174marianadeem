// 18l1174_q1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"student.h"

student::student()//default constuctor
{
	cout<<"default constructor is called"<<endl;
	ID=counter;
	quizCapacity=3;
	quizTaken=0;
	//quizScore=new float [quizCapacity];
	quizScore=new float [quizCapacity];
	GPA=-1;
	counter++;
}

student::student(int quizCap,float gpa)//overloaded constructor
{ 
	cout<<"overloaded constructor is called "<<endl;
	ID=counter;
	quizCapacity=quizCap;
	quizTaken=0;
	quizScore=new float [quizCapacity];
	GPA=gpa;
	counter++;
}
student::student(const student & otherstudent)//copy constructor
{
	cout<<"copy constructor is called"<<endl;
	ID=otherstudent.ID;
	quizTaken=otherstudent.quizTaken;
	GPA=otherstudent.GPA;
	quizCapacity=otherstudent.quizCapacity;
	quizScore=new float [quizCapacity];
	for(int i=0;i<otherstudent.quizTaken;i++)
	{
		quizScore[i]=otherstudent.quizScore[i];
	}
}
student::~student()//distructor
{
	cout<<"destructor is invoked"<<endl;
	delete[]quizScore;
}

void student:: addQuizScore(float score)//function for adding the scores of quizzes
{ 
	if(quizTaken<quizCapacity)
	{
		quizScore[quizTaken]=score;
		quizTaken++;
	}
	else
		cout<<"quiz not taken"<<endl;
}
void student::setGPA(float &gpa)//function for setting the gpa
{
	GPA=gpa;
}
float student::getGPA()const//function fot obtaining the gpa
{
	return GPA;
}
void student::print()const//print function
{
	cout<<"ID:"<<ID<<endl;
	cout<<"GPA:"<<GPA<<endl;
	cout<<"number of quizes taken"<<quizTaken<<endl;
	for(int i=0;i<quizTaken;i++)
	{
		cout<<"quiz score"<<i<<":"<<quizScore[i]<<endl;
	}
}
bool student::compare(student otherstudent)//compare function
{
	if (GPA>otherstudent.GPA)
		return true;
	else 
		return false;
}
void student::updateScore(int qTaken,float newScore)//function for updating the scores of quizes
{
	if(quizTaken>qTaken)
	{
	 quizScore[qTaken]=newScore;
	 cout<<"score is update"<<endl;
	}
	else 
		cout<<"you haven't taken the quiz yet"<<endl;
}
int student::counter=1;
