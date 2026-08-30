// Day 2 - Supplementary Example 3: Loop Types Comparison
// Demonstrates: While vs Do-While vs For loops

#include<iostream>
using namespace std;

int main()
{
    cout << "=== Loop Comparison ===\n";
    
    // Example 1: While Loop (condition first)
    cout << "\nWhile Loop (1 to 5):";
    int i = 1;
    while(i <= 5)
    {
        cout << " " << i;
        i++;
    }
    
    // Example 2: Do-While Loop (body first, then condition)
    cout << "\nDo-While Loop (1 to 5):";
    int j = 1;
    do
    {
        cout << " " << j;
        j++;
    }
    while(j <= 5);
    
    // Example 3: For Loop (all in one line)
    cout << "\nFor Loop (1 to 5):";
    for(int k = 1; k <= 5; k++)
    {
        cout << " " << k;
    }
    
    // Example 4: While loop with break
    cout << "\n\nWhile with Break (until 3):";
    int x = 1;
    while(x <= 10)
    {
        if(x > 3)
            break;
        cout << " " << x;
        x++;
    }
    
    // Example 5: For loop with continue
    cout << "\nFor with Continue (skip 3):";
    for(int y = 1; y <= 5; y++)
    {
        if(y == 3)
            continue;
        cout << " " << y;
    }
    
    // Example 6: Do-While executes at least once
    cout << "\n\nDo-While even if condition false (0 <= 5 but starts anyway):\n";
    int z = 10;
    do
    {
        cout << "Executed once (z=" << z << ")\n";
    }
    while(z < 5);  // Condition is false, but body executed once
    
    // Example 7: While won't execute if condition false from start
    cout << "\nWhile won't execute (0 >= 5 is false):\n";
    int w = 10;
    while(w < 5)  // Condition false from start
    {
        cout << "This won't print";
        w++;
    }
    cout << "While loop didn't execute";
    
    return 0;
}

/*
Output:
=== Loop Comparison ===

While Loop (1 to 5): 1 2 3 4 5
Do-While Loop (1 to 5): 1 2 3 4 5
For Loop (1 to 5): 1 2 3 4 5

While with Break (until 3): 1 2 3
For with Continue (skip 3): 1 2 4 5

Do-While even if condition false (0 <= 5 but starts anyway):
Executed once (z=10)

While won't execute (0 >= 5 is false):
While loop didn't execute
*/
