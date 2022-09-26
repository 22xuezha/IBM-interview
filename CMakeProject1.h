#pragma once

#include <iostream>
#include<string.h>

using namespace std;

class GradeBook
{
public:
	void setCourseName(string name)
	{
		courseName = name;
	}
	string getCourseName() const
	{
		return courseName;
	}
	void displayMessage() const
	{
		cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
	}
private:
	string courseName;
};




