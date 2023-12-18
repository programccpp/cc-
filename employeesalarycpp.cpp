#include <iostream>
#include <vector>
class Employee
{
public:
    std::string name;
    int employeeId;
    double basicSalary;
    double netSalary;
};
int main()
{
    int numEmployees;
    std::cout << "Enter the number of employees: ";
    std::cin >> numEmployees;
    if (numEmployees <= 0)
    {
        std::cerr << "Invalid input. Please enter a positive number of employees.\n";
        return 1;
    }
    std::vector<Employee> employees(numEmployees);
    for (int i = 0; i < numEmployees; ++i)
    {
        std::cout << "Enter details for Employee " << i + 1 << ":\n";
        std::cout << "Name: ";
        std::cin >> employees[i].name;
        std::cout << "Employee ID: ";
        std::cin >> employees[i].employeeId;
        std::cout << "Basic Salary: ";
        std::cin >> employees[i].basicSalary;
    }
    for (int i = 0; i < numEmployees; ++i)
    {
        double da = 0.52 * employees[i].basicSalary;
        double grossSalary = employees[i].basicSalary + da;
        double it = 0.30 * grossSalary;
        employees[i].netSalary = grossSalary - it;
    }
    std::cout << "\nEmployee Information and Net Salary:\n";
    for (int i = 0; i < numEmployees; ++i)
    {
        std::cout << "Employee " << i + 1 << ":\n";
        std::cout << "Name: " << employees[i].name << "\n";
        std::cout << "Employee ID: " << employees[i].employeeId << "\n";
        std::cout << "Basic Salary: " << employees[i].basicSalary << "\n";
        std::cout << "Net Salary: " << employees[i].netSalary << "\n\n";
    }
    return 0;
}
