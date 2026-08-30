// Day 4 - Supplementary Example 6: Pass by Value vs Pass by Reference
// Demonstrates: Difference between passing by value and by reference

#include<iostream>
using namespace std;

// Pass by Value - Original not modified
void changeByValue(int x)
{
    cout << "\n  Inside function (pass by value): x = " << x;
    x = 100;
    cout << "\n  After change: x = " << x;
}

// Pass by Reference - Original IS modified
void changeByReference(int &x)
{
    cout << "\n  Inside function (pass by reference): x = " << x;
    x = 100;
    cout << "\n  After change: x = " << x;
}

// Swap by value - Won't swap original
void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "\n  Inside function: a = " << a << ", b = " << b;
}

// Swap by reference - Will swap original
void swapByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "\n  Inside function: a = " << a << ", b = " << b;
}

int main()
{
    cout << "=== Pass by Value vs Pass by Reference ===\n";
    
    // Example 1: Pass by Value
    cout << "\nExample 1: Pass by Value";
    int num1 = 10;
    cout << "\nBefore function call: num1 = " << num1;
    changeByValue(num1);
    cout << "\nAfter function call: num1 = " << num1;
    cout << "\n>> num1 is NOT modified!";
    
    // Example 2: Pass by Reference
    cout << "\n\nExample 2: Pass by Reference";
    int num2 = 10;
    cout << "\nBefore function call: num2 = " << num2;
    changeByReference(num2);
    cout << "\nAfter function call: num2 = " << num2;
    cout << "\n>> num2 IS modified!";
    
    // Example 3: Swap by Value
    cout << "\n\nExample 3: Swap by Value";
    int x = 5, y = 10;
    cout << "\nBefore swap: x = " << x << ", y = " << y;
    swapByValue(x, y);
    cout << "\nAfter swap: x = " << x << ", y = " << y;
    cout << "\n>> Values are NOT swapped!";
    
    // Example 4: Swap by Reference
    cout << "\n\nExample 4: Swap by Reference";
    int a = 5, b = 10;
    cout << "\nBefore swap: a = " << a << ", b = " << b;
    swapByReference(a, b);
    cout << "\nAfter swap: a = " << a << ", b = " << b;
    cout << "\n>> Values ARE swapped!";
    
    // Example 5: When to use each
    cout << "\n\n--- When to use: ---";
    cout << "\nPass by Value:\n  - When function shouldn't modify original";
    cout << "\n  - For small data types (int, float, char)";
    cout << "\n  - Default parameter passing";
    
    cout << "\n\nPass by Reference:\n  - When function needs to modify original";
    cout << "\n  - For large data structures (arrays, structs)";
    cout << "\n  - When function returns multiple values via parameters";
    
    return 0;
}

/*
Output:
=== Pass by Value vs Pass by Reference ===

Example 1: Pass by Value
Before function call: num1 = 10
  Inside function (pass by value): x = 10
  After change: x = 100
After function call: num1 = 10
>> num1 is NOT modified!

Example 2: Pass by Reference
Before function call: num2 = 10
  Inside function (pass by reference): x = 10
  After change: x = 100
After function call: num2 = 100
>> num2 IS modified!

Example 3: Swap by Value
Before swap: x = 5, y = 10
  Inside function: a = 10, b = 5
After swap: x = 5, y = 10
>> Values are NOT swapped!

Example 4: Swap by Reference
Before swap: a = 5, b = 10
  Inside function: a = 10, b = 5
After swap: a = 10, b = 5
>> Values ARE swapped!

--- When to use: ---

Pass by Value:
  - When function shouldn't modify original
  - For small data types (int, float, char)
  - Default parameter passing

Pass by Reference:
  - When function needs to modify original
  - For large data structures (arrays, structs)
  - When function returns multiple values via parameters
*/
