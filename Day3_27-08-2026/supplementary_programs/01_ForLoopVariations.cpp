// Day 3 - Supplementary Example 1: For Loop Variations
// Demonstrates: Different ways to use for loops

#include<iostream>
using namespace std;

int main()
{
    cout << "=== For Loop Variations ===\n";
    
    // Variation 1: Count up from 1 to 10
    cout << "\nCount Up (1 to 10): ";
    for(int i = 1; i <= 10; i++)
        cout << i << " ";
    
    // Variation 2: Count down from 10 to 1
    cout << "\nCount Down (10 to 1): ";
    for(int i = 10; i >= 1; i--)
        cout << i << " ";
    
    // Variation 3: Skip by 2 (even numbers)
    cout << "\nEven Numbers (2, 4, 6, ...): ";
    for(int i = 2; i <= 20; i += 2)
        cout << i << " ";
    
    // Variation 4: Skip by 3
    cout << "\nMultiples of 3 (3, 6, 9, ...): ";
    for(int i = 3; i <= 30; i += 3)
        cout << i << " ";
    
    // Variation 5: Start from different number
    cout << "\nStart from 5 to 15: ";
    for(int i = 5; i <= 15; i++)
        cout << i << " ";
    
    // Variation 6: Backward with step
    cout << "\nBackward by 2 (20, 18, 16, ...): ";
    for(int i = 20; i >= 10; i -= 2)
        cout << i << " ";
    
    // Variation 7: Character iteration
    cout << "\nCharacter Loop (A to E): ";
    for(char ch = 'A'; ch <= 'E'; ch++)
        cout << ch << " ";
    
    // Variation 8: Multiplication table
    cout << "\n\nMultiplication Table of 5:\n";
    for(int i = 1; i <= 10; i++)
        cout << "5 x " << i << " = " << (5 * i) << endl;
    
    return 0;
}

/*
Output:
=== For Loop Variations ===

Count Up (1 to 10): 1 2 3 4 5 6 7 8 9 10
Count Down (10 to 1): 10 9 8 7 6 5 4 3 2 1
Even Numbers (2, 4, 6, ...): 2 4 6 8 10 12 14 16 18 20
Multiples of 3 (3, 6, 9, ...): 3 6 9 12 15 18 21 24 27 30
Start from 5 to 15: 5 6 7 8 9 10 11 12 13 14 15
Backward by 2 (20, 18, 16, ...): 20 18 16 14 12
Character Loop (A to E): A B C D E

Multiplication Table of 5:
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50
*/
