#include <stdio.h>
int main()
{
    float basicSalary, homeAllowance, medicalAllowance, totalSalary;
    printf("Enter a Basic Salary: ");
    scanf("%f", &basicSalary);
    if (basicSalary > 20000)
    {
        homeAllowance = 0.4 * basicSalary;
        medicalAllowance = 1500;
    }
    else
    {
        homeAllowance = 0.55 * basicSalary;
        medicalAllowance = 1000;
    }

    totalSalary = basicSalary + homeAllowance + medicalAllowance;
    printf("Salary Details....\n");
    printf("Basic Salary: %.2f\n", basicSalary);
    printf("Home Allowance: %.2f\n", homeAllowance);
    printf("Medical Allowance: %.2f\n", medicalAllowance);
    printf("Total Salary: %.2f\n", totalSalary);
    return 0;
}