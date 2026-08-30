// Day 3 - Supplementary Example 5: Pattern Printing
// Demonstrates: Using nested loops to create patterns

#include<iostream>
using namespace std;

int main()
{
    cout << "=== Pattern Printing with Nested Loops ===\n";
    
    // Pattern 1: Square
    cout << "\nPattern 1: Square (4x4)\n";
    for(int i = 1; i <= 4; i++)
    {
        for(int j = 1; j <= 4; j++)
            cout << "* ";
        cout << "\n";
    }
    
    // Pattern 2: Triangle
    cout << "Pattern 2: Triangle\n";
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= i; j++)
            cout << "* ";
        cout << "\n";
    }
    
    // Pattern 3: Inverted Triangle
    cout << "Pattern 3: Inverted Triangle\n";
    for(int i = 5; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
            cout << "* ";
        cout << "\n";
    }
    
    // Pattern 4: Number Triangle
    cout << "Pattern 4: Number Triangle\n";
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= i; j++)
            cout << j << " ";
        cout << "\n";
    }
    
    // Pattern 5: Pyramid with spaces
    cout << "Pattern 5: Pyramid with Spaces\n";
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 5 - i; j++)
            cout << " ";  // Print spaces
        for(int j = 1; j <= i; j++)
            cout << "* ";  // Print stars
        cout << "\n";
    }
    
    // Pattern 6: Diamond
    cout << "Pattern 6: Diamond\n";
    int n = 4;
    // Upper half
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n - i; j++)
            cout << " ";
        for(int j = 1; j <= i; j++)
            cout << "* ";
        cout << "\n";
    }
    // Lower half
    for(int i = n - 1; i >= 1; i--)
    {
        for(int j = 1; j <= n - i; j++)
            cout << " ";
        for(int j = 1; j <= i; j++)
            cout << "* ";
        cout << "\n";
    }
    
    // Pattern 7: Alphabet Triangle
    cout << "Pattern 7: Alphabet Triangle\n";
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j <= i; j++)
            cout << (char)('A' + j) << " ";  // A, B, C, D, E
        cout << "\n";
    }
    
    return 0;
}

/*
Output:
=== Pattern Printing with Nested Loops ===

Pattern 1: Square (4x4)
* * * *
* * * *
* * * *
* * * *

Pattern 2: Triangle
*
* *
* * *
* * * *
* * * * *

Pattern 3: Inverted Triangle
* * * * *
* * * *
* * *
* *
*

Pattern 4: Number Triangle
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

Pattern 5: Pyramid with Spaces
    *
   * *
  * * *
 * * * *
* * * * *

Pattern 6: Diamond
   * 
  * * 
 * * * 
* * * * 
 * * * 
  * * 
   * 

Pattern 7: Alphabet Triangle
A
A B
A B C
A B C D
A B C D E
*/
