// Day 2 - Supplementary Example 4: Nested Loops
// Demonstrates: Patterns using nested loops

#include<iostream>
using namespace std;

int main()
{
    cout << "=== Nested Loop Patterns ===\n";
    
    // Pattern 1: Multiplication table
    cout << "\nPattern 1: Multiplication Table (3x3)\n";
    for(int i = 1; i <= 3; i++)
    {
        for(int j = 1; j <= 3; j++)
        {
            cout << i << "x" << j << "=" << (i*j) << "  ";
        }
        cout << "\n";
    }
    
    // Pattern 2: Square of stars
    cout << "\nPattern 2: Square of Stars (4x4)\n";
    for(int i = 1; i <= 4; i++)
    {
        for(int j = 1; j <= 4; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    
    // Pattern 3: Triangle
    cout << "\nPattern 3: Triangle of Stars\n";
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    
    // Pattern 4: Inverted Triangle
    cout << "\nPattern 4: Inverted Triangle\n";
    for(int i = 5; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    
    // Pattern 5: Diamond
    cout << "\nPattern 5: Diamond (n=4)\n";
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
    
    return 0;
}

/*
Output:
=== Nested Loop Patterns ===

Pattern 1: Multiplication Table (3x3)
1x1=1  1x2=2  1x3=3  
2x1=2  2x2=4  2x3=6  
3x1=3  3x2=6  3x3=9  

Pattern 2: Square of Stars (4x4)
* * * * 
* * * * 
* * * * 
* * * * 

Pattern 3: Triangle of Stars
* 
* * 
* * * 
* * * * 
* * * * * 

Pattern 4: Inverted Triangle
* * * * * 
* * * * 
* * * 
* * 
* 

Pattern 5: Diamond (n=4)
   * 
  * * 
 * * * 
* * * * 
 * * * 
  * * 
   * 
*/
