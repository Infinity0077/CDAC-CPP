// Supplementary Example 1: Compound Assignment Operators
// Demonstrates: +=, -=, *=, /=, %=

#include<iostream>
using namespace std;

int main()
{
    int score = 100;
    
    cout << "=== Compound Assignment Operators ===\n";
    cout << "Initial score: " << score << endl;
    
    score += 10;  // Add 10
    cout << "After += 10: " << score << endl;
    
    score -= 5;   // Subtract 5
    cout << "After -= 5: " << score << endl;
    
    score *= 2;   // Multiply by 2
    cout << "After *= 2: " << score << endl;
    
    score /= 3;   // Divide by 3
    cout << "After /= 3: " << score << endl;
    
    score %= 10;  // Modulus 10
    cout << "After %= 10: " << score << endl;
    
    return 0;
}

/*
Output:
=== Compound Assignment Operators ===
Initial score: 100
After += 10: 110
After -= 5: 105
After *= 2: 210
After /= 3: 70
After %= 10: 0
*/
