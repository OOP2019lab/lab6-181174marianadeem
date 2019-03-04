#include "stdafx.h"

#include "student.h"



void main()

{

	student s1;

	s1.addQuizScore(2.0);

	s1.addQuizScore(3.0);

	s1.addQuizScore(4.0);

	s1.addQuizScore(6.0);

	s1.print();

	student s2(4, 2);

	s2.addQuizScore(9.0);

	s2.addQuizScore(4.0);

	s2.addQuizScore(6.0);

	s2.print();

	student s3(s1);

	s3.updateScore(1, 3.0);

	s3.updateScore(10, 3.0);

	bool b = s1.compare(s2);

	cout << b << endl;

	float gpa = 3.0;

	s3.setGPA(gpa);

	s3.print();

	s1.print();

	system("pause");

}

//constructor is called when 

//1.an object is created

//2.when an object is passed by value

//3.when copy constructor is called

//copy constructor
//default constructor is called when an object is created and arguments are not explicitly given
//destructor is invoked when an object goes out of scope. scope is determined by{}
//for instance when an object is passed by value, destructor is called when the function ends.
//it is also invoked when the main function ends
//the reason why destructor is called is to free memory from the heap 
