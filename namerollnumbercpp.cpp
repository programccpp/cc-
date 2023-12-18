#include <iostream>
#include <string>
class Student
{
public:
    std::string name;
    int rollNo;
    char grade;
};
int main()
{
    const int numStudents = 3;
    Student studentArray[numStudents];
    for (int i = 0; i < numStudents; ++i)
    {
        std::cout << "Enter details for Student " << i + 1 << ":\n";
        std::cout << "Name: ";
        std::cin >> studentArray[i].name;
        std::cout << "Roll No.: ";
        std::cin >> studentArray[i].rollNo;
        std::cout << "Grade: ";
        std::cin >> studentArray[i].grade;
    }
    std::cout << "\nStudent Information:\n";
    for (int i = 0; i < numStudents; ++i)
    {
        std::cout << "Student " << i + 1 << ":\n";
        std::cout << "Name: " << studentArray[i].name << "\n";
        std::cout << "Roll No.: " << studentArray[i].rollNo << "\n";
        std::cout << "Grade: " << studentArray[i].grade << "\n\n";
    }
    return 0;
}
