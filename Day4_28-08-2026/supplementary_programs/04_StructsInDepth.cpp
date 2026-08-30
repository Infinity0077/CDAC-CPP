// Day 4 - Supplementary Example 4: Structs in Depth
// Demonstrates: Structure usage, member access, and operations

#include<iostream>
#include<string.h>
using namespace std;

// Define a Book structure
struct Book
{
    int bookid;
    char name[50];
    char author[50];
    float price;
    
    // Member function to display
    void display()
    {
        cout << "Book ID: " << bookid << endl;
        cout << "Name: " << name << endl;
        cout << "Author: " << author << endl;
        cout << "Price: Rs." << price << endl;
        cout << "---------\n";
    }
};

int main()
{
    cout << "=== Structures in Depth ===\n";
    
    // Example 1: Single object
    cout << "\nExample 1: Single Book Object\n";
    Book b1;
    b1.bookid = 101;
    strcpy(b1.name, "C++ Programming");
    strcpy(b1.author, "Bjarne Stroustrup");
    b1.price = 450.50;
    b1.display();
    
    // Example 2: Multiple objects
    cout << "Example 2: Multiple Book Objects\n";
    Book b2;
    b2.bookid = 102;
    strcpy(b2.name, "Data Structures");
    strcpy(b2.author, "Mark Allen Weiss");
    b2.price = 520.75;
    b2.display();
    
    // Example 3: Array of structures
    cout << "Example 3: Array of Structures\n";
    Book library[3];
    
    library[0].bookid = 201;
    strcpy(library[0].name, "Algorithm Design Manual");
    strcpy(library[0].author, "Steven Skiena");
    library[0].price = 650.00;
    
    library[1].bookid = 202;
    strcpy(library[1].name, "Python Basics");
    strcpy(library[1].author, "Mark Lutz");
    library[1].price = 380.50;
    
    library[2].bookid = 203;
    strcpy(library[2].name, "Web Development");
    strcpy(library[2].author, "Jon Duckett");
    library[2].price = 550.00;
    
    cout << "\nLibrary Books:\n";
    for(int i = 0; i < 3; i++)
        library[i].display();
    
    // Example 4: Find cheapest book
    cout << "\nExample 4: Find Cheapest Book\n";
    int cheapest_index = 0;
    for(int i = 1; i < 3; i++)
    {
        if(library[i].price < library[cheapest_index].price)
            cheapest_index = i;
    }
    cout << "Cheapest Book:\n";
    library[cheapest_index].display();
    
    // Example 5: Total price of all books
    cout << "Example 5: Total Price Calculation\n";
    float total = 0;
    for(int i = 0; i < 3; i++)
        total += library[i].price;
    cout << "Total library value: Rs." << total << endl;
    
    return 0;
}

/*
Output:
=== Structures in Depth ===

Example 1: Single Book Object
Book ID: 101
Name: C++ Programming
Author: Bjarne Stroustrup
Price: Rs.450.5
---------

Example 2: Multiple Book Objects
Book ID: 102
Name: Data Structures
Author: Mark Allen Weiss
Price: Rs.520.75
---------

Example 3: Array of Structures

Library Books:
Book ID: 201
Name: Algorithm Design Manual
Author: Steven Skiena
Price: Rs.650
---------
Book ID: 202
Name: Python Basics
Author: Mark Lutz
Price: Rs.380.5
---------
Book ID: 203
Name: Web Development
Author: Jon Duckett
Price: Rs.550
---------

Example 4: Find Cheapest Book
Cheapest Book:
Book ID: 202
Name: Python Basics
Author: Mark Lutz
Price: Rs.380.5
---------

Example 5: Total Price Calculation
Total library value: Rs.1580.5
*/
