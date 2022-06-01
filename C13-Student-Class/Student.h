#pragma once
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

//------------------ DECLARATION FILE -------------------------------
class Student
{
private:
	//Data members
	int		id;
	double	gpa;

public:
	//Member functions
	
	//Mutators
	void setId(int idVal);
	void setGpa(double gpaVal);
	
	//Accessors
	int		getId();
	double	getGpa();

	//Constructors
	Student();  //zero-arguments const.
	Student(int idVal, double gpaVal);  //all-arguments const.

	//User-defined functions
	string toString();

};

