#include <stdio.h>
int main()
{
    int num1 = 10, num2 = 5;
    int *ptr1, *ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    int sum = *ptr1 + *ptr2;
    int difference = *ptr1 - *ptr2;
    int product = *ptr1 * *ptr2;
    int quotient = *ptr1 / *ptr2;
    int remainder = *ptr1 % *ptr2;
    printf("Arithmetic Operations using Pointers:\n");
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);
    return 0;
}
