// Day 5 - Supplementary Example 5: Multiple Constructors (Overloading)
// Demonstrates: Different constructors for different needs

#include<iostream>
#include<string.h>
using namespace std;

class Rectangle
{
private:
    float length;
    float width;
    
public:
    // Constructor 1: Default Constructor
    Rectangle()
    {
        length = 0;
        width = 0;
        cout << "Default Constructor: Rectangle with 0x0\n";
    }
    
    // Constructor 2: Parameterized Constructor
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
        cout << "Parameterized Constructor: Rectangle " << l << "x" << w << " created!\n";
    }
    
    // Constructor 3: Square (single parameter)
    Rectangle(float side)
    {
        length = side;
        width = side;
        cout << "Square Constructor: Square " << side << "x" << side << " created!\n";
    }
    
    float area()
    {
        return length * width;
    }
    
    float perimeter()
    {
        return 2 * (length + width);
    }
    
    void display()
    {
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << area() << ", Perimeter: " << perimeter() << endl;
        cout << "---------\n";
    }
};

int main()
{
    cout << "=== Constructor Overloading ===\n";
    
    // Using Default Constructor
    cout << "\n1. Using Default Constructor:\n";
    Rectangle r1;
    r1.display();
    
    // Using Parameterized Constructor
    cout << "2. Using Parameterized Constructor:\n";
    Rectangle r2(5, 10);
    r2.display();
    
    // Using Square Constructor
    cout << "3. Using Square Constructor:\n";
    Rectangle r3(7);
    r3.display();
    
    // Another rectangle
    cout << "4. Another Rectangle:\n";
    Rectangle r4(3, 8);
    r4.display();
    
    cout << "Same class name, different constructors!\n";
    cout << "Compiler chooses based on parameters.\n";
    
    return 0;
}

/*
Output:
=== Constructor Overloading ===

1. Using Default Constructor:
Default Constructor: Rectangle with 0x0
Length: 0, Width: 0
Area: 0, Perimeter: 0
---------

2. Using Parameterized Constructor:
Parameterized Constructor: Rectangle 5x10 created!
Length: 5, Width: 10
Area: 50, Perimeter: 30
---------

3. Using Square Constructor:
Square Constructor: Square 7x7 created!
Length: 7, Width: 7
Area: 49, Perimeter: 28
---------

4. Another Rectangle:
Parameterized Constructor: Rectangle 3x8 created!
Length: 3, Width: 8
Area: 24, Perimeter: 22
---------

Same class name, different constructors!
Compiler chooses based on parameters.
*/
