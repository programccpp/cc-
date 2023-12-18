#include <stdio.h>
#include <math.h>
int isPrime(int num)
{
    if (num < 2)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int isArmstrong(int num)
{
    int originalNum = num;
    int sum = 0, remainder, n = 0;
    while (originalNum != 0)
    {
        originalNum /= 10;
        ++n;
    }
    originalNum = num;
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        sum += pow(remainder, n);
        originalNum /= 10;
    }
    return (num == sum);
}
int isPerfect(int num)
{
    int sum = 1;

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    return (num == sum);
}
void generateFibonacci(int n, int a, int b)
{
    if (n > 0)
    {
        printf("%d ", a);
        generateFibonacci(n - 1, b, a + b);
    }
}
void reverseString(char *str)
{
    char *start = str;
    char *end = str + strlen(str) - 1;
    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPrime(num))
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }
    if (isArmstrong(num))
    {
        printf("%d is an Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", num);
    }
    if (isPerfect(num))
    {
        printf("%d is a perfect number.\n", num);
    }
    else
    {
        printf("%d is not a perfect number.\n", num);
    }
    int n;
    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    generateFibonacci(n, 0, 1);
    printf("\n");
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    reverseString(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
