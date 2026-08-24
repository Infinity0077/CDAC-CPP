// Supplementary Example 4: main() with return type
// Demonstrates: int main() and return 0;

#include<iostream>
using namespace std;

int main()  // Note: int main(), not just main()
{
    cout << "=== Program Execution ===";
    cout << "\nThis is line 1";
    cout << "\nThis is line 2";
    cout << "\nThis is line 3";
    
    cout << "\n\n=== Program Completed Successfully ===";
    
    return 0;  // Return 0 means: "No errors, program executed successfully"
}

/*
Output:
=== Program Execution ===
This is line 1
This is line 2
This is line 3

=== Program Completed Successfully ===

Return value: 0 (Success)
*/
