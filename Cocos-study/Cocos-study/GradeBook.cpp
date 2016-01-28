#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;

class GradeBook
{
public:
	GradeBook();
	~GradeBook();

	void displayMessage(string courseName) {
		cout << "welcome to the grade book for\n" << courseName << "!" << endl;
	}

private:
	
};

GradeBook::GradeBook()
{
}

GradeBook::~GradeBook()
{
}

int main() {
	string nameOfCourse;
	GradeBook myBook;

	cout << "Please enter the course name:" << endl;

	getline(cin, nameOfCourse);

	cout << endl;

	myBook.displayMessage(nameOfCourse);

	getline(cin, nameOfCourse);
	return 0;
}