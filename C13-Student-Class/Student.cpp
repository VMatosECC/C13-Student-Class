#include "Student.h"

//Mutators
void Student::setId(int idVal)
{
	//Rule. id's have 3 digits, must be positive 
	idVal = abs(idVal);
	while (idVal > 999) idVal /= 10;
	this->id = idVal;
}

void Student::setGpa(double gpaVal)
{
	gpaVal = abs(gpaVal);
	//TODO - if gpa is out-of-range REJECT.
	this->gpa = gpaVal;
}

//Accessors
int		Student::getId() { return this->id; }
double	Student::getGpa() { return this->gpa; }

//Constructors
Student::Student()
{
	this->setGpa(0);
	this->setId(0);
}

Student::Student(int idVal, double gpaVal)
{
	this->setGpa(gpaVal);
	this->setId(idVal);
}

//user-Defined methods
string Student::toString()
{
	ostringstream sout;
	sout << this << " Student [ ID: " << getId()
		<< ", GPA: " << getGpa()
		<< " ]";
	return sout.str();
}