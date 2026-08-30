// Day 5 - Supplementary Example 4: Copy Constructor
// Demonstrates: Copying one object to another

#include<iostream>
#include<string.h>
using namespace std;

class Person
{
private:
    int age;
    char name[50];
    
public:
    // Parameterized Constructor
    Person(int a, char n[])
    {
        age = a;
        strcpy(name, n);
        cout << "Parameterized Constructor: " << name << " created!\n";
    }
    
    // Copy Constructor
    Person(Person &other)
    {
        age = other.age;
        strcpy(name, other.name);
        cout << "Copy Constructor: " << name << " copied!\n";
    }
    
    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main()
{
    cout << "=== Copy Constructor ===\n";
    
    // Create original object
    cout << "\nCreating original object...\n";
    Person p1(25, "Ajay");
    
    cout << "\nOriginal object data:\n";
    p1.display();
    
    // Copy to new object - Copy Constructor called
    cout << "\nCopying p1 to p2...\n";
    Person p2 = p1;  // Copy constructor called
    
    cout << "\nCopied object data:\n";
    p2.display();
    
    // Create another copy
    cout << "\nCopying p1 to p3...\n";
    Person p3 = p1;  // Copy constructor called again
    
    cout << "\nAll objects have the same data:\n";
    cout << "p1: ";
    p1.display();
    cout << "p2: ";
    p2.display();
    cout << "p3: ";
    p3.display();
    
    return 0;
}

/*
Output:
=== Copy Constructor ===

Creating original object...
Parameterized Constructor: Ajay created!

Original object data:
Name: Ajay, Age: 25

Copying p1 to p2...
Copy Constructor: Ajay copied!

Copied object data:
Name: Ajay, Age: 25

Copying p1 to p3...
Copy Constructor: Ajay copied!

All objects have the same data:
p1: Name: Ajay, Age: 25
p2: Name: Ajay, Age: 25
p3: Name: Ajay, Age: 25
*/
