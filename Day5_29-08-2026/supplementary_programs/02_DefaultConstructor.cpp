// Day 5 - Supplementary Example 2: Default Constructor
// Demonstrates: Constructor called automatically when object is created

#include<iostream>
#include<string.h>
using namespace std;

class Car
{
private:
    char brand[50];
    int year;
    float price;
    
public:
    // Default Constructor - No parameters
    Car()
    {
        cout << "Default Constructor Called!\n";
        strcpy(brand, "Unknown");
        year = 0;
        price = 0.0;
    }
    
    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
        cout << "Price: Rs." << price << endl;
        cout << "---------\n";
    }
};

int main()
{
    cout << "=== Default Constructor ===\n";
    
    // Creating objects - default constructor is called automatically
    cout << "\nCreating c1...\n";
    Car c1;
    cout << "c1 data after construction:\n";
    c1.display();
    
    cout << "\nCreating c2...\n";
    Car c2;
    cout << "c2 data after construction:\n";
    c2.display();
    
    cout << "\nCreating c3...\n";
    Car c3;
    cout << "c3 data after construction:\n";
    c3.display();
    
    cout << "Note: Each time an object is created, constructor is called!\n";
    
    return 0;
}

/*
Output:
=== Default Constructor ===

Creating c1...
Default Constructor Called!
c1 data after construction:
Brand: Unknown
Year: 0
Price: Rs.0
---------

Creating c2...
Default Constructor Called!
c2 data after construction:
Brand: Unknown
Year: 0
Price: Rs.0
---------

Creating c3...
Default Constructor Called!
c3 data after construction:
Brand: Unknown
Year: 0
Price: Rs.0
---------

Note: Each time an object is created, constructor is called!
*/
