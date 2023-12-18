#include <iostream>
#include <climits>
int main()
{
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    if (n <= 0)
    {
        std::cerr << "Invalid input. Please enter a positive number of elements.\n";
        return 1;
    }
    int num;
    int largest = INT_MIN;
    int smallest = INT_MAX;
    std::cout << "Enter the list of integers:\n";
    for (int i = 0; i < n; ++i)
    {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> num;
        if (num > largest)
        {
            largest = num;
        }
        if (num < smallest)
        {
            smallest = num;
        }
    }
    std::cout << "\nLargest Number: " << largest << "\n";
    std::cout << "Smallest Number: " << smallest << "\n";
    return 0;
}
