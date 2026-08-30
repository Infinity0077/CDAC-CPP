// Day 4 - Supplementary Example 2: 2D Array Operations
// Demonstrates: Matrix operations using 2D arrays

#include<iostream>
using namespace std;

int main()
{
    cout << "=== 2D Array Operations ===\n";
    
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3, cols = 3;
    
    // Display matrix
    cout << "\nOriginal Matrix:\n";
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
            cout << matrix[i][j] << " ";
        cout << "\n";
    }
    
    // Operation 1: Sum of all elements
    cout << "\nSum of all elements: ";
    int sum = 0;
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            sum += matrix[i][j];
    cout << sum;
    
    // Operation 2: Sum of each row
    cout << "\n\nSum of each row:\n";
    for(int i = 0; i < rows; i++)
    {
        int row_sum = 0;
        for(int j = 0; j < cols; j++)
            row_sum += matrix[i][j];
        cout << "Row " << i << ": " << row_sum << endl;
    }
    
    // Operation 3: Sum of each column
    cout << "\nSum of each column:\n";
    for(int j = 0; j < cols; j++)
    {
        int col_sum = 0;
        for(int i = 0; i < rows; i++)
            col_sum += matrix[i][j];
        cout << "Column " << j << ": " << col_sum << endl;
    }
    
    // Operation 4: Maximum element
    cout << "\nMaximum element: ";
    int max = matrix[0][0];
    int max_row = 0, max_col = 0;
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            if(matrix[i][j] > max)
            {
                max = matrix[i][j];
                max_row = i;
                max_col = j;
            }
    cout << max << " at [" << max_row << "][" << max_col << "]";
    
    // Operation 5: Transpose
    cout << "\n\nTransposed Matrix:\n";
    for(int j = 0; j < cols; j++)
    {
        for(int i = 0; i < rows; i++)
            cout << matrix[i][j] << " ";
        cout << "\n";
    }
    
    // Operation 6: Diagonal sum
    cout << "\nDiagonal sum (top-left to bottom-right): ";
    int diag_sum = 0;
    for(int i = 0; i < rows; i++)
        diag_sum += matrix[i][i];
    cout << diag_sum;  // 1 + 5 + 9 = 15
    
    return 0;
}

/*
Output:
=== 2D Array Operations ===

Original Matrix:
1 2 3
4 5 6
7 8 9

Sum of all elements: 45

Sum of each row:
Row 0: 6
Row 1: 15
Row 2: 24

Sum of each column:
Column 0: 12
Column 1: 15
Column 2: 18

Maximum element: 9 at [2][2]

Transposed Matrix:
1 4 7
2 5 8
3 6 9

Diagonal sum (top-left to bottom-right): 15
*/
