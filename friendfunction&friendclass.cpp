#include <iostream>
class FriendClass;
class MyClass
{
private:
    int privateMember;

public:
    MyClass(int value) : privateMember(value) {}
    friend void displayPrivateMember(const MyClass &obj);
    friend class FriendClass;
};
void displayPrivateMember(const MyClass &obj)
{
    std::cout << "Friend Function: Accessing private member of MyClass - " << obj.privateMember << "\n";
}
class FriendClass
{
public:
    void accessPrivateMember(const MyClass &obj)
    {
        std::cout << "Friend Class: Accessing private member of MyClass - " << obj.privateMember << "\n";
    }
};
int main()
{
    MyClass myObject(42);
    displayPrivateMember(myObject);
    FriendClass friendObj;
    friendObj.accessPrivateMember(myObject);
    return 0;
}
