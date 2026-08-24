// Supplementary Example 3: Advanced cin & cout
// Demonstrates: Multiple inputs, formatting, combining data types

#include<iostream>
using namespace std;

int main()
{
    cout << "=== Multiple Input Methods ===\n";
    
    // Method 1: Multiple inputs on same line
    int num1, num2, num3;
    cout << "Enter 3 numbers (on same line or separate): ";
    cin >> num1 >> num2 >> num3;
    
    cout << "\n=== Values You Entered ===";
    cout << "\nNumber 1: " << num1;
    cout << "\nNumber 2: " << num2;
    cout << "\nNumber 3: " << num3;
    
    // Method 2: Different data types
    cout << "\n\n=== Multiple Data Types ===";
    int age;
    float height;
    char grade;
    
    cout << "\nEnter age (int): ";
    cin >> age;
    cout << "Enter height (float): ";
    cin >> height;
    cout << "Enter grade (char): ";
    cin >> grade;
    
    // Method 3: Formatted output
    cout << "\n\n=== Formatted Output ===";
    cout << "\nAge: " << age << " years";
    cout << "\nHeight: " << height << " cm";
    cout << "\nGrade: " << grade;
    
    // Method 4: Combining in single cout
    cout << "\n\n=== Combined Output ===";
    cout << "\nStudent Info: Age=" << age 
         << ", Height=" << height 
         << "cm, Grade=" << grade << endl;
    
    // Method 5: Calculations with output
    cout << "\n=== Calculations ===";
    int sum = num1 + num2 + num3;
    float average = (num1 + num2 + num3) / 3.0;
    
    cout << "\nSum of 3 numbers: " << sum;
    cout << "\nAverage of 3 numbers: " << average << endl;
    
    return 0;
}

/*
Sample Input:
10 20 30
20
175.5
A

Output:
=== Multiple Input Methods ===
Enter 3 numbers (on same line or separate): 
=== Values You Entered ===
Number 1: 10
Number 2: 20
Number 3: 30

=== Multiple Data Types ===
Enter age (int): Enter height (float): Enter grade (char): 

=== Formatted Output ===
Age: 20 years
Height: 175.5 cm
Grade: A

=== Combined Output ===
Student Info: Age=20, Height=175.5cm, Grade=A

=== Calculations ===
Sum of 3 numbers: 60
Average of 3 numbers: 20
*/
