#include "..\header\action.h"

// Functions

// 1. Add students
void addStudent(Student arr[], int& n);

// 2. Search for students by ID
void displayStudentByID(Student arr[], int n);

// 3. Display a list of students
void listOfStudents(const Student* s, int n);

// 4. Sort students by GPA
void listOfStudentsByGPA(const Student* s, int n);

// 5. Sort students by name
void listOfStudentsByName(const Student* s, int n);

// 6. Update student information
void updateStudent(Student* s, int n);

// 7. Remove student
void removeStudent(Student arr[], int& n);

// 8. Put the student list in the "student.txt" file
void outFile(const Student* s, int n, std::ofstream& outstream);

int main() {
  Student students[100];
  int n = 0;
  std::ofstream outfile;
  int choose;
	do {
		menu();
		std::cout << "Choose (0 - 8): ";
		std::cin >> choose;
		switch(choose)
		{
		case 1:
			system("cls");
			addStudent(students, n);
			break;
		case 2:
			system("cls");
			displayStudentByID(students, n);
			break;
		case 3:
			system("cls");
      listOfStudents(students, n);
			break;
		case 4:
			system("cls");
      listOfStudentsByGPA(students, n);
			break;
		case 5:
			system("cls");
      listOfStudentsByName(students, n);
			break;
		case 6:
			system("cls");
      updateStudent(students, n);
			break;
		case 7:
			system("cls");
      removeStudent(students, n);
			break;
    case 8:
			system("cls");
      outFile(students, n, outfile);
			break;
		case 0:
			system("cls");
			break;
		}
	} while(choose != 0);
	return 0;
}