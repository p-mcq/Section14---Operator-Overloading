#include <iostream>
#include <vector>
#include "MyString.h"

using std::cout, std::endl;

void InitialImplementation();
void AssignmentOverloadingCopying();
void MessingWithVectors();
void AssignOverloadingMoving();

int main()
{
    // inital_implementations();
    // assignmentOverloading();
    // MessingWithVectors();
    AssignOverloadingMoving();

    return 0;
}

void InitialImplementation()
{
    MyString defaultString;
    MyString loadedString("Pre-Loaded String.");
    MyString customString(defaultString);

    cout << defaultString.display() << endl;
    cout << loadedString.display() << endl;
    std::cout << customString.display() << std::endl;

    customString.changeString("Custom string.");
    std::cout << customString.display() << std::endl;

    std::cout << customString.getLengthOfString() << std::endl;

    defaultString = customString;
    std::cout << defaultString.display() << std::endl;
}

void AssignmentOverloadingCopying()
{
    MyString a{"Hello"};
    MyString b;

    b = a;

    cout << b.display() << endl;

    b = "This is a test.";

    cout << b.display() << endl;
}

void MessingWithVectors()
{
    MyString coLabbers = "Jair, Ruben and Paul";
    cout << coLabbers.display() << endl;

    std::vector<MyString> coLabbersVector;
    coLabbersVector.push_back("Jair");
    coLabbersVector.push_back("Ruben");
    coLabbersVector.push_back("Paul");

    for (const MyString &s : coLabbersVector)
    {
        cout << s.display() << endl;
    };

    for (MyString &s : coLabbersVector)
    {
        s = "Changed String";
    };

    for (const MyString &s : coLabbersVector)
    {
        cout << s.display() << endl;
    };
}

void AssignOverloadingMoving()
{
    MyString a{"Hello"};
    cout << a.display() << endl;
    a = MyString{"Hoi"};
    cout << a.display() << endl;
    a = "Doei";
    cout << a.display() << endl;
}
