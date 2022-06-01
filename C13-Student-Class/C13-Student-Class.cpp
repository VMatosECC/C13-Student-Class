// C13-Student-Class.cpp 

#include <iostream>
#include "Student.h"


int main()
{
    Student s1;
    cout << s1.toString() << endl;

    s1.setId(12345);
    s1.setGpa(-3.95);
    cout << s1.toString() << endl;

    Student s2(456789, -2.10);
    cout << s2.toString() << endl;

    cout << "Student whose ID is " << s2.getId() << " has a GPA of " << s2.getGpa() << endl;

    double combinedGpa = (s1.getGpa() + s2.getGpa()) / 2;
    cout << "Combined GPA is " << combinedGpa << endl;
}

