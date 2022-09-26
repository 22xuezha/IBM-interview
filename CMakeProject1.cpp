

#include "CMakeProject1.h"

using namespace std;

int main()
{
	string nameOfCourse;
	GradeBook myGradeBook;

	cout << "Initial course name is:" << myGradeBook.getCourseName() << endl;

	cout << "\nPlease enter the course name:" << endl;
	cin >> nameOfCourse;
	myGradeBook.setCourseName(nameOfCourse);

	cout << "\n";
	myGradeBook.displayMessage();
	
}
