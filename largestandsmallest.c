#include <stdio.h>
int main()
{
    int n;
    printf("Enter a size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: \n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Element %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    printf("Largest number is: %d\n", largest);
    printf("Smallest number is: %d", smallest);
    return 0;
}