// Program 4: Calculate Square and Cube of a Number
// Demonstrates: Multiple calculations and formatted output

#include<iostream>
using namespace std;

main()
{
    int n, sq, cb;
    cout << "Enter value for n: ";
    cin >> n;
    sq = n * n;         // Square
    cb = n * n * n;     // Cube
    cout << "\nSquare = " << sq;
    cout << "\nCube = " << cb;
}

/*
Sample Input:
2

Output:
Enter value for n: 
Square = 4
Cube = 8
*/
