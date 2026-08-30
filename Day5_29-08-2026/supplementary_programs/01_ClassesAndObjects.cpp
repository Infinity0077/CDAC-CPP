// Day 5 - Supplementary Example 1: Classes and Objects Basics
// Demonstrates: Class definition, object creation, and member access

#include<iostream>
#include<string.h>
using namespace std;

class Student
{
private:
    int roll;
    char name[50];
    float gpa;
    
public:
    void setData(int r, char n[], float g)
    {
        roll = r;
        strcpy(name, n);
        gpa = g;
    }
    
    void display()
    {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "GPA: " << gpa << endl;
        cout << "---------\n";
    }
};

int main()
{
    cout << "=== Classes and Objects Basics ===\n";
    
    // Create first object
    cout << "\nObject 1:\n";
    Student s1;
    s1.setData(101, "Ajay", 8.5);
    s1.display();
    
    // Create second object
    cout << "Object 2:\n";
    Student s2;
    s2.setData(102, "Priya", 9.2);
    s2.display();
    
    // Create third object
    cout << "Object 3:\n";
    Student s3;
    s3.setData(103, "Vikram", 7.8);
    s3.display();
    
    cout << "Each object has its own data!\n";
    cout << "s1, s2, s3 are separate instances of Student class.\n";
    
    return 0;
}

/*
Output:
=== Classes and Objects Basics ===

Object 1:
Roll: 101
Name: Ajay
GPA: 8.5
---------

Object 2:
Roll: 102
Name: Priya
GPA: 9.2
---------

Object 3:
Roll: 103
Name: Vikram
GPA: 7.8
---------

Each object has its own data!
s1, s2, s3 are separate instances of Student class.
*/
