// Day 3 - Supplementary Example 2: Array Operations
// Demonstrates: Common array operations and patterns

#include<iostream>
using namespace std;

int main()
{
    cout << "=== Array Operations ===\n";
    
    int arr[5] = {10, 25, 30, 15, 40};
    int n = 5;
    
    // Operation 1: Print array
    cout << "\nArray Elements: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    // Operation 2: Sum of all elements
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    cout << "\nSum: " << sum;
    
    // Operation 3: Average
    float avg = sum / n;
    cout << "\nAverage: " << avg;
    
    // Operation 4: Maximum element
    int max = arr[0];
    int max_index = 0;
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            max_index = i;
        }
    }
    cout << "\nMaximum: " << max << " at index " << max_index;
    
    // Operation 5: Minimum element
    int min = arr[0];
    int min_index = 0;
    for(int i = 1; i < n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
            min_index = i;
        }
    }
    cout << "\nMinimum: " << min << " at index " << min_index;
    
    // Operation 6: Count even numbers
    int count_even = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
            count_even++;
    }
    cout << "\nEven numbers count: " << count_even;
    
    // Operation 7: Sum of even numbers
    int sum_even = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
            sum_even += arr[i];
    }
    cout << "\nSum of even numbers: " << sum_even;
    
    // Operation 8: Print in reverse
    cout << "\nReverse order: ";
    for(int i = n - 1; i >= 0; i--)
        cout << arr[i] << " ";
    
    // Operation 9: Find specific value
    int search = 30;
    bool found = false;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == search)
        {
            cout << "\n" << search << " found at index " << i;
            found = true;
            break;
        }
    }
    if(!found)
        cout << "\n" << search << " not found";
    
    return 0;
}

/*
Output:
=== Array Operations ===

Array Elements: 10 25 30 15 40
Sum: 120
Average: 24
Maximum: 40 at index 4
Minimum: 10 at index 0
Even numbers count: 3
Sum of even numbers: 80
Reverse order: 40 15 30 25 10
30 found at index 2
*/
