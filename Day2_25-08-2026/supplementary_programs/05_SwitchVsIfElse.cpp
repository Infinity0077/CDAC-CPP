// Day 2 - Supplementary Example 5: Switch vs If-Else
// Demonstrates: When to use switch vs if-else

#include<iostream>
using namespace std;

int main()
{
    cout << "=== Switch vs If-Else Comparison ===\n";
    
    // Example 1: Switch for menu (BETTER)
    cout << "\nExample 1: Menu using Switch\n";
    int choice = 2;
    
    cout << "\n1. Addition\n2. Subtraction\n3. Multiplication\n";
    cout << "\nYou selected: " << choice << endl;
    
    int a = 10, b = 5;
    switch(choice)
    {
        case 1:
            cout << "Result: " << a + b;
            break;
        case 2:
            cout << "Result: " << a - b;
            break;
        case 3:
            cout << "Result: " << a * b;
            break;
        default:
            cout << "Invalid choice";
    }
    
    // Example 2: If-Else for ranges (BETTER)
    cout << "\n\nExample 2: Grading using If-Else\n";
    int marks = 75;
    
    if(marks >= 90)
        cout << "Grade: A (Excellent)";
    else if(marks >= 80)
        cout << "Grade: B (Good)";
    else if(marks >= 70)
        cout << "Grade: C (Average)";
    else if(marks >= 60)
        cout << "Grade: D (Pass)";
    else
        cout << "Grade: F (Fail)";
    
    // Example 3: Character categorization with Switch
    cout << "\n\nExample 3: Vowel Check using Switch\n";
    char ch = 'e';
    
    switch(tolower(ch))
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << ch << " is a Vowel";
            break;
        default:
            cout << ch << " is a Consonant";
    }
    
    // Example 4: Why If-Else is better for ranges
    cout << "\n\nExample 4: Age category using If-Else\n";
    int age = 25;
    
    if(age < 13)
        cout << "Child";
    else if(age < 18)
        cout << "Teenager";
    else if(age < 60)
        cout << "Adult";
    else
        cout << "Senior";
    
    // Note: Can't use switch for ranges efficiently
    // switch(age) won't work well for ranges
    
    return 0;
}

/*
Output:
=== Switch vs If-Else Comparison ===

Example 1: Menu using Switch

1. Addition
2. Subtraction
3. Multiplication

You selected: 2
Result: 5

Example 2: Grading using If-Else
Grade: C (Average)

Example 3: Vowel Check using Switch
e is a Vowel

Example 4: Age category using If-Else
Adult
*/
