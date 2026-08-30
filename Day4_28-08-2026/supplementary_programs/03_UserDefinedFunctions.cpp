// Day 4 - Supplementary Example 3: User-Defined Functions
// Demonstrates: Different types of functions and their usage

#include<iostream>
using namespace std;

// Function Type 1: No return, No parameters
void greet()
{
    cout << "Hello from greet function!\n";
}

// Function Type 2: No return, With parameters
void printSum(int a, int b)
{
    cout << "Sum of " << a << " and " << b << " is: " << (a + b) << endl;
}

// Function Type 3: With return, With parameters
int multiply(int x, int y)
{
    return x * y;
}

// Function Type 4: Calculate factorial
int factorial(int n)
{
    if(n <= 1)
        return 1;
    return n * factorial(n - 1);
}

// Function Type 5: Find maximum of array
int findMax(int arr[], int size)
{
    int max = arr[0];
    for(int i = 1; i < size; i++)
        if(arr[i] > max)
            max = arr[i];
    return max;
}

// Function Type 6: Pass by reference
void increment(int &x)
{
    x++;  // Changes value outside function too
}

int main()
{
    cout << "=== User-Defined Functions ===\n";
    
    // Function Type 1
    cout << "\nFunction Type 1 (No return, No parameters):\n";
    greet();
    
    // Function Type 2
    cout << "\nFunction Type 2 (No return, With parameters):\n";
    printSum(10, 20);
    printSum(50, 30);
    
    // Function Type 3
    cout << "\nFunction Type 3 (With return, With parameters):\n";
    int result = multiply(7, 8);
    cout << "Multiplication result: " << result << endl;
    
    // Function Type 4
    cout << "\nFunction Type 4 (Recursive):\n";
    cout << "Factorial of 5: " << factorial(5) << endl;
    
    // Function Type 5
    cout << "\nFunction Type 5 (Array as parameter):\n";
    int arr[5] = {12, 45, 23, 67, 34};
    cout << "Array: ";
    for(int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    cout << "\nMaximum: " << findMax(arr, 5) << endl;
    
    // Function Type 6
    cout << "\nFunction Type 6 (Pass by reference):\n";
    int num = 10;
    cout << "Before increment: " << num << endl;
    increment(num);
    cout << "After increment: " << num << endl;
    
    return 0;
}

/*
Output:
=== User-Defined Functions ===

Function Type 1 (No return, No parameters):
Hello from greet function!

Function Type 2 (No return, With parameters):
Sum of 10 and 20 is: 30
Sum of 50 and 30 is: 80

Function Type 3 (With return, With parameters):
Multiplication result: 56

Function Type 4 (Recursive):
Factorial of 5: 120

Function Type 5 (Array as parameter):
Array: 12 45 23 67 34
Maximum: 67

Function Type 6 (Pass by reference):
Before increment: 10
After increment: 11
*/
