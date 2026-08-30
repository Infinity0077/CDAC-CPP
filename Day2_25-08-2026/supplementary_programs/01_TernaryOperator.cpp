// Day 2 - Supplementary Example 1: Ternary Operator
// Demonstrates: Simple one-line if-else using ternary operator

#include<iostream>
using namespace std;

int main()
{
    cout << "=== Ternary Operator Examples ===\n";
    
    // Example 1: Age category
    int age = 20;
    string category = (age >= 18) ? "Adult" : "Minor";
    cout << "\nAge: " << age << " -> " << category;
    
    // Example 2: Pass/Fail
    int marks = 45;
    cout << "\nMarks: " << marks << " -> ";
    cout << (marks >= 40) ? "PASS" : "FAIL";
    
    // Example 3: Discount calculation
    int price = 1500;
    int discount = (price > 1000) ? 200 : 50;
    cout << "\nPrice: " << price << " -> Discount: " << discount;
    
    // Example 4: Max of two numbers
    int a = 15, b = 20;
    int max_val = (a > b) ? a : b;
    cout << "\nMax of " << a << " and " << b << " is: " << max_val;
    
    // Example 5: Nested ternary (not recommended but possible)
    int score = 75;
    string grade = (score >= 80) ? "A" : (score >= 70) ? "B" : (score >= 60) ? "C" : "F";
    cout << "\nScore: " << score << " -> Grade: " << grade;
    
    return 0;
}

/*
Output:
=== Ternary Operator Examples ===

Age: 20 -> Adult
Marks: 45 -> PASS
Price: 1500 -> Discount: 200
Max of 15 and 20 is: 20
Score: 75 -> Grade: B
*/
