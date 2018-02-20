#include <iostream>
#include <string>

struct student {

  int rollNo, age;
  float marks;
  std::string name;
};

int main() {

  student stud1;

  std::cout << "Enter the roll number, name, age and marks of a student separated by spaces: ";
  std::cin >> stud1.rollNo >> stud1.name >> stud1.age >> stud1.marks;

  std::cout << "The student details are: ";
  std::cout << "Roll no.: " << stud1.rollNo << std::endl
	    << "Name: " << stud1.name << std::endl
	    << "Age : " << stud1.age << std::endl
	    << "Marks: " << stud1.marks << std::endl;

  return 0;
}

  
  
