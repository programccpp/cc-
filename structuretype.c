#include <stdio.h>
struct personal
{
    char name[50];
    char designation[50];
    char dateOfJoining[20];
    float salary;
};
int main()
{
    struct personal person;
    printf("Enter person's information:\n");
    printf("Name: ");
    scanf("%s", person.name);
    printf("Designation: ");
    scanf("%s", person.designation);
    printf("Date of Joining: ");
    scanf("%s", person.dateOfJoining);
    printf("Salary: ");
    scanf("%f", &person.salary);
    printf("\nPerson's Information:\n");
    printf("Name: %s\n", person.name);
    printf("Designation: %s\n", person.designation);
    printf("Date of Joining: %s\n", person.dateOfJoining);
    printf("Salary: %.2f\n", person.salary);
    return 0;
}
