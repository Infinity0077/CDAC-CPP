// Day 5 - Supplementary Example 3: Parameterized Constructor
// Demonstrates: Constructor with parameters for initialization

#include<iostream>
#include<string.h>
using namespace std;

class Book
{
private:
    int bookid;
    char title[50];
    char author[50];
    float price;
    
public:
    // Parameterized Constructor - With parameters
    Book(int id, char t[], char a[], float p)
    {
        bookid = id;
        strcpy(title, t);
        strcpy(author, a);
        price = p;
        cout << "Book " << id << " created!\n";
    }
    
    void display()
    {
        cout << "Book ID: " << bookid << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: Rs." << price << endl;
        cout << "---------\n";
    }
};

int main()
{
    cout << "=== Parameterized Constructor ===\n";
    
    // Creating objects with parameters
    cout << "\nCreating b1...\n";
    Book b1(101, "C++ Programming", "Bjarne Stroustrup", 450.50);
    b1.display();
    
    cout << "Creating b2...\n";
    Book b2(102, "Data Structures", "Mark Allen Weiss", 520.75);
    b2.display();
    
    cout << "Creating b3...\n";
    Book b3(103, "Algorithm Design", "Steven Skiena", 650.00);
    b3.display();
    
    cout << "Parameterized constructors initialize objects with specific values!\n";
    
    return 0;
}

/*
Output:
=== Parameterized Constructor ===

Creating b1...
Book 101 created!
Book ID: 101
Title: C++ Programming
Author: Bjarne Stroustrup
Price: Rs.450.5
---------

Creating b2...
Book 102 created!
Book ID: 102
Title: Data Structures
Author: Mark Allen Weiss
Price: Rs.520.75
---------

Creating b3...
Book 103 created!
Book ID: 103
Title: Algorithm Design
Author: Steven Skiena
Price: Rs.650
---------

Parameterized constructors initialize objects with specific values!
*/
