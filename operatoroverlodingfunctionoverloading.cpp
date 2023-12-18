#include <iostream>
class Complex
{
private:
    double real;
    double imag;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
    Complex operator+(const Complex &other) const
    {
        Complex result;
        result.real = real + other.real;
        result.imag = imag + other.imag;
        return result;
    }
    bool operator==(const Complex &other) const
    {
        return (real == other.real) && (imag == other.imag);
    }
    void display() const
    {
        std::cout << real << " + " << imag << "i";
    }
};
int add(int a, int b)
{
    return a + b;
}
double add(double a, double b)
{
    return a + b;
}
int main()
{
    Complex c1(2.5, 3.5);
    Complex c2(1.5, 2.5);
    Complex sum = c1 + c2;
    std::cout << "Sum of two complex numbers: ";
    sum.display();
    std::cout << "\n\n";
    int intSum = add(5, 10);
    double doubleSum = add(3.5, 2.5);
    std::cout << "Sum of integers: " << intSum << "\n";
    std::cout << "Sum of doubles: " << doubleSum << "\n";
    return 0;
}
