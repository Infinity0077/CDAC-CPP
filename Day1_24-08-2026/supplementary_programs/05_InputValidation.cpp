// Supplementary Example 5: Basic Input Validation
// Demonstrates: Checking if input is reasonable before using it

#include<iostream>
using namespace std;

int main()
{
    cout << "=== Input Validation Example ===";
    
    int age;
    cout << "\nEnter your age: ";
    cin >> age;
    
    // Simple validation: Check if age is in reasonable range
    if(age < 0 || age > 150)
    {
        cout << "Invalid age! Age should be between 0 and 150.";
    }
    else
    {
        cout << "\nValid age entered: " << age << " years";
        
        // Safe to use age now
        if(age >= 18)
        {
            cout << "\nYou are an adult.";
        }
        else
        {
            cout << "\nYou are a minor.";
        }
    }
    
    cout << "\n\n=== Validation for Multiple Values ===";
    
    int marks;
    cout << "\nEnter marks (0-100): ";
    cin >> marks;
    
    if(marks < 0 || marks > 100)
    {
        cout << "Invalid marks! Must be between 0 and 100.";
    }
    else
    {
        cout << "\nMarks entered: " << marks;
        
        if(marks >= 40)
            cout << "\nResult: PASS";
        else
            cout << "\nResult: FAIL";
    }
    
    return 0;
}

/*
Sample Input 1:
25
75

Output:
=== Input Validation Example ===
Enter your age: 
Valid age entered: 25 years
You are an adult.

=== Validation for Multiple Values ===
Enter marks (0-100): 
Marks entered: 75
Result: PASS

---

Sample Input 2 (Invalid):
200
150

Output:
=== Input Validation Example ===
Enter your age: 
Invalid age! Age should be between 0 and 150.

=== Validation for Multiple Values ===
Enter marks (0-100): 
Invalid marks! Must be between 0 and 100.
*/
