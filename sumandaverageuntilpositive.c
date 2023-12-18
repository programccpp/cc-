#include <stdio.h>
int main()
{
    int num, count = 0;
    double sum = 0.0;
    printf("Enter a positive number to calculate the sum and average.\n");
    printf("Entering a negative number leads to terminate.\n");
    while (1)
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num < 0)
        {
            break;
        }
        sum += num;
        count++;
    }
    if (count > 0)
    {
        double average = (float)sum / count;
        printf("Sum is: %.2f\n", sum);
        printf("Average is: %.2f", average);
    }
    return 0;
}