// Supplementary Example 6: Variable Initialization
// Demonstrates: Why initialization is important

#include<iostream>
using namespace std;

int main()
{
    cout << "=== Uninitialized vs Initialized Variables ===";
    
    // Uninitialized variable - DANGEROUS!
    int uninitialized;  // No value assigned
    cout << "\nUninitialized variable: " << uninitialized;  // Random garbage!
    
    // Initialized variable - SAFE!
    int initialized = 0;  // Value assigned
    cout << "\nInitialized variable: " << initialized;  // Safe value
    
    // Why it matters in calculations
    cout << "\n\n=== Impact on Calculations ===";
    
    // Calculation with uninitialized (WRONG)
    int x;  // Has garbage value
    x = x + 10;  // garbage + 10 = garbage!
    cout << "\nUninitialized x after x+10: " << x << " (WRONG!)";
    
    // Calculation with initialized (CORRECT)
    int y = 0;  // Has known value
    y = y + 10;  // 0 + 10 = 10
    cout << "\nInitialized y after y+10: " << y << " (CORRECT!)";
    
    // More examples
    cout << "\n\n=== Initializing Different Types ===";
    
    int age = 0;                   // Integer
    float salary = 0.0;            // Float
    char grade = 'A';              // Character
    
    cout << "\nInteger (age): " << age;
    cout << "\nFloat (salary): " << salary;
    cout << "\nChar (grade): " << grade;
    
    // Assignment after initialization
    cout << "\n\n=== After Assignment ===";
    age = 25;
    salary = 50000.50;
    grade = 'B';
    
    cout << "\nInteger (age): " << age;
    cout << "\nFloat (salary): " << salary;
    cout << "\nChar (grade): " << grade;
    
    // Multiple variables
    cout << "\n\n=== Multiple Variables Initialization ===";
    int a = 0, b = 0, c = 0;
    cout << "\nAll initialized to 0: a=" << a << ", b=" << b << ", c=" << c;
    
    return 0;
}

/*
Output (example - uninitialized values vary):
=== Uninitialized vs Initialized Variables ===
Uninitialized variable: -1234567  (random garbage!)
Initialized variable: 0  (safe)

=== Impact on Calculations ===
Uninitialized x after x+10: -1234557 (WRONG!)
Initialized y after y+10: 10 (CORRECT!)

=== Initializing Different Types ===
Integer (age): 0
Float (salary): 0
Char (grade): A

=== After Assignment ===
Integer (age): 25
Float (salary): 50000.5
Char (grade): B

=== Multiple Variables Initialization ===
All initialized to 0: a=0, b=0, c=0
*/
