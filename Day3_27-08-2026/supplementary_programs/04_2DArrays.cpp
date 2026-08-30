// Day 3 - Supplementary Example 4: 2D Arrays (Introduction)
// Demonstrates: Using 2D arrays for matrix-like data

#include<iostream>
using namespace std;

int main()
{
    cout << "=== 2D Array Basics ===\n";
    
    // Example 1: Input and display 2D array
    cout << "\nExample 1: Simple 2x3 Matrix\n";
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    
    cout << "Matrix Display:\n";
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    
    // Example 2: Sum of all elements
    cout << "\nExample 2: Sum of Matrix Elements\n";
    int sum = 0;
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            sum += matrix[i][j];
        }
    }
    cout << "Sum: " << sum;
    
    // Example 3: Find maximum
    cout << "\nExample 3: Maximum Element\n";
    int max = matrix[0][0];
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(matrix[i][j] > max)
                max = matrix[i][j];
        }
    }
    cout << "Maximum: " << max;
    
    // Example 4: Sum of each row
    cout << "\nExample 4: Sum of Each Row\n";
    for(int i = 0; i < 2; i++)
    {
        int row_sum = 0;
        for(int j = 0; j < 3; j++)
        {
            row_sum += matrix[i][j];
        }
        cout << "Row " << i << " sum: " << row_sum << endl;
    }
    
    // Example 5: Sum of each column
    cout << "\nExample 5: Sum of Each Column\n";
    for(int j = 0; j < 3; j++)
    {
        int col_sum = 0;
        for(int i = 0; i < 2; i++)
        {
            col_sum += matrix[i][j];
        }
        cout << "Column " << j << " sum: " << col_sum << endl;
    }
    
    // Example 6: Transpose (swap rows and columns)
    cout << "\nExample 6: Transpose of Matrix\n";
    cout << "Original (2x3):\n";
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
            cout << matrix[i][j] << " ";
        cout << "\n";
    }
    
    cout << "Transposed (3x2):\n";
    for(int j = 0; j < 3; j++)
    {
        for(int i = 0; i < 2; i++)
            cout << matrix[i][j] << " ";
        cout << "\n";
    }
    
    return 0;
}

/*
Output:
=== 2D Array Basics ===

Example 1: Simple 2x3 Matrix
Matrix Display:
1 2 3
4 5 6

Example 2: Sum of Matrix Elements
Sum: 21

Example 3: Maximum Element
Maximum: 6

Example 4: Sum of Each Row
Row 0 sum: 6
Row 1 sum: 15

Example 5: Sum of Each Column
Column 0 sum: 5
Column 1 sum: 7
Column 2 sum: 9

Example 6: Transpose of Matrix
Original (2x3):
1 2 3
4 5 6

Transposed (3x2):
1 4
2 5
3 6
*/
