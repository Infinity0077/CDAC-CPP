// Day 4 - Supplementary Example 5: Function Overloading
// Demonstrates: Same function name with different parameters

#include<iostream>
using namespace std;

// Overload 1: Add two integers
int add(int a, int b)
{
    cout << "\nAdding two integers: " << a << " + " << b << " = ";
    return a + b;
}

// Overload 2: Add two floats
float add(float a, float b)
{
    cout << "\nAdding two floats: " << a << " + " << b << " = ";
    return a + b;
}

// Overload 3: Add three integers
int add(int a, int b, int c)
{
    cout << "\nAdding three integers: " << a << " + " << b << " + " << c << " = ";
    return a + b + c;
}

// Overload 4: Multiply two numbers
int multiply(int a, int b)
{
    return a * b;
}

// Overload 5: Multiply three numbers
int multiply(int a, int b, int c)
{
    return a * b * c;
}

// Function to print array
void print(int arr[], int size)
{
    cout << "\nArray: ";
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

// Overload: Function to print string
void print(char str[])
{
    cout << "\nString: " << str;
}

int main()
{
    cout << "=== Function Overloading ===\n";
    
    // Test add() overloads
    cout << "\n--- Testing add() function ---";
    cout << add(10, 20) << endl;        // Calls add(int, int)
    cout << add(5.5, 3.5) << endl;      // Calls add(float, float)
    cout << add(10, 20, 30) << endl;    // Calls add(int, int, int)
    
    // Test multiply() overloads
    cout << "\n--- Testing multiply() function ---";
    cout << "\nMultiplying two integers: 5 * 6 = " << multiply(5, 6);
    cout << "\nMultiplying three integers: 2 * 3 * 4 = " << multiply(2, 3, 4);
    
    // Test print() overloads
    cout << "\n\n--- Testing print() function ---";
    int arr[5] = {10, 20, 30, 40, 50};
    print(arr, 5);  // Calls print(int[], int)
    
    char str[] = "Hello World";
    print(str);  // Calls print(char[])
    
    cout << "\n\n--- Summary ---";
    cout << "\nFunction overloading allows:";
    cout << "\n1. Same function name with different parameter count";
    cout << "\n2. Same function name with different parameter types";
    cout << "\n3. Compiler selects correct version based on parameters";
    
    return 0;
}

/*
Output:
=== Function Overloading ===

--- Testing add() function ---

Adding two integers: 10 + 20 = 30

Adding two floats: 5.5 + 3.5 = 9

Adding three integers: 10 + 20 + 30 = 60

--- Testing multiply() function ---

Multiplying two integers: 5 * 6 = 30
Multiplying three integers: 2 * 3 * 4 = 24

--- Testing print() function ---

Array: 10 20 30 40 50 
String: Hello World

--- Summary ---

Function overloading allows:

1. Same function name with different parameter count
2. Same function name with different parameter types
3. Compiler selects correct version based on parameters
*/
