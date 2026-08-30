// Day 2 - Supplementary Example 6: Common Loop Patterns
// Demonstrates: Frequently used patterns in programs

#include<iostream>
using namespace std;

int main()
{
    cout << "=== Common Loop Patterns ===\n";
    
    // Pattern 1: Sum and Count
    cout << "\nPattern 1: Sum and Count\n";
    int arr1[5] = {10, 20, 30, 40, 50};
    int sum = 0, count = 0;
    
    for(int i = 0; i < 5; i++)
    {
        sum += arr1[i];
        count++;
    }
    
    cout << "Sum: " << sum << ", Count: " << count << ", Average: " << (sum / count);
    
    // Pattern 2: Find Maximum
    cout << "\n\nPattern 2: Find Maximum\n";
    int arr2[5] = {15, 42, 8, 39, 21};
    int max = arr2[0];
    
    for(int i = 1; i < 5; i++)
    {
        if(arr2[i] > max)
            max = arr2[i];
    }
    
    cout << "Maximum: " << max;
    
    // Pattern 3: Find Minimum
    cout << "\n\nPattern 3: Find Minimum\n";
    int min = arr2[0];
    
    for(int i = 1; i < 5; i++)
    {
        if(arr2[i] < min)
            min = arr2[i];
    }
    
    cout << "Minimum: " << min;
    
    // Pattern 4: Linear Search
    cout << "\n\nPattern 4: Linear Search\n";
    int search_val = 39;
    bool found = false;
    int index = -1;
    
    for(int i = 0; i < 5; i++)
    {
        if(arr2[i] == search_val)
        {
            found = true;
            index = i;
            break;
        }
    }
    
    if(found)
        cout << search_val << " found at index " << index;
    else
        cout << search_val << " not found";
    
    // Pattern 5: Count specific condition
    cout << "\n\nPattern 5: Count Even Numbers\n";
    int count_even = 0;
    
    for(int i = 0; i < 5; i++)
    {
        if(arr2[i] % 2 == 0)
            count_even++;
    }
    
    cout << "Even numbers: " << count_even;
    
    // Pattern 6: Accumulate with condition
    cout << "\n\nPattern 6: Sum of Even Numbers Only\n";
    int sum_even = 0;
    
    for(int i = 0; i < 5; i++)
    {
        if(arr2[i] % 2 == 0)
            sum_even += arr2[i];
    }
    
    cout << "Sum of even: " << sum_even;
    
    // Pattern 7: Reverse iteration
    cout << "\n\nPattern 7: Print in Reverse\n";
    cout << "Original: ";
    for(int i = 0; i < 5; i++)
        cout << arr1[i] << " ";
    
    cout << "\nReverse: ";
    for(int i = 4; i >= 0; i--)
        cout << arr1[i] << " ";
    
    return 0;
}

/*
Output:
=== Common Loop Patterns ===

Pattern 1: Sum and Count
Sum: 150, Count: 5, Average: 30

Pattern 2: Find Maximum
Maximum: 42

Pattern 3: Find Minimum
Minimum: 8

Pattern 4: Linear Search
39 found at index 3

Pattern 5: Count Even Numbers
Even numbers: 2

Pattern 6: Sum of Even Numbers Only
Sum of even: 56

Pattern 7: Print in Reverse
Original: 10 20 30 40 50 
Reverse: 50 40 30 20 10
*/
