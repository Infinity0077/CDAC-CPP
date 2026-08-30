// Day 2 - Supplementary Example 2: Break & Continue Statements
// Demonstrates: When to use break and continue in loops

#include<iostream>
using namespace std;

int main()
{
    cout << "=== Break Statement Example ===\n";
    
    // Example 1: Break - Finding a number in array
    int arr[5] = {10, 20, 30, 40, 50};
    int search = 30;
    
    cout << "\nSearching for " << search << " in array: ";
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
        if(arr[i] == search)
        {
            cout << "\n>> Found at index " << i;
            break;  // Stop searching
        }
    }
    
    // Example 2: Break with counter
    cout << "\n\nBreak - Count first 5 numbers: ";
    int count = 0;
    for(int i = 1; i <= 100; i++)
    {
        cout << i << " ";
        count++;
        if(count == 5)
            break;  // Exit after 5 numbers
    }
    
    cout << "\n\n=== Continue Statement Example ===\n";
    
    // Example 3: Continue - Skip even numbers
    cout << "\nOdd numbers from 1 to 10: ";
    for(int i = 1; i <= 10; i++)
    {
        if(i % 2 == 0)
            continue;  // Skip even numbers
        cout << i << " ";
    }
    
    // Example 4: Continue - Skip zeros in sum
    cout << "\n\nSum excluding zeros: ";
    int nums[6] = {5, 0, 10, 0, 15, 20};
    int sum = 0;
    
    for(int i = 0; i < 6; i++)
    {
        if(nums[i] == 0)
            continue;  // Skip zero, don't add to sum
        sum += nums[i];
        cout << "Added " << nums[i] << " (sum=" << sum << ") ";
    }
    cout << "\nFinal Sum: " << sum;
    
    // Example 5: Continue in nested loop
    cout << "\n\nMultiplication table (skip 5x): \n";
    for(int i = 1; i <= 3; i++)
    {
        for(int j = 1; j <= 3; j++)
        {
            if(j == 2)
                continue;  // Skip column 2
            cout << i << "x" << j << "=" << (i*j) << " ";
        }
        cout << endl;
    }
    
    return 0;
}

/*
Output:
=== Break Statement Example ===

Searching for 30 in array: 10 20 30 
>> Found at index 2

Break - Count first 5 numbers: 1 2 3 4 5 

=== Continue Statement Example ===

Odd numbers from 1 to 10: 1 3 5 7 9 

Sum excluding zeros: Added 5 (sum=5) Added 10 (sum=15) Added 15 (sum=30) Added 20 (sum=50) 
Final Sum: 50

Multiplication table (skip 5x): 
1x1=1 1x3=3 
2x1=2 2x3=6 
3x1=3 3x3=9
*/
