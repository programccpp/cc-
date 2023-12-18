#include <stdio.h>
int main()
{
    char correctUsername[] = "User123";
    char correctPassword[] = "Pass456";
    char enteredUsername[20];
    char enteredPassword[20];
    printf("Enter a Username: ");
    scanf("%s", &enteredUsername);
    if (strcmp(enteredUsername, correctUsername) == 0)
    {
        printf("Enter a Password: ");
        scanf("%s", &enteredPassword);
        if (strcmp(enteredPassword, correctPassword) == 0)
        {
            printf("Login Successfull!");
        }
        else
        {
            printf("Incorrect Password!");
        }
    }
    else
    {
        printf("Incorrect Username!");
    }
    return 0;
}