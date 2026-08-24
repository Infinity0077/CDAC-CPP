// Program 6: Update Number with Original + Half Value
// Demonstrates: Variable reassignment and single variable operations

#include<iostream>
using namespace std;

main()
{
    int n;
    cout << "Enter value for n: ";
    cin >> n;
    cout << "\nBefore = " << n;
    n = n + n / 2;      // Add half of original value
    cout << "\nAfter = " << n;
}

/*
Sample Input:
100

Output:
Enter value for n: 
Before = 100
After = 150
*/
