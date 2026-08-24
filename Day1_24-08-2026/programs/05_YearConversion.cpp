// Program 5: Convert Years to Months and Days
// Demonstrates: Multiple variable operations

#include<iostream>
using namespace std;

main()
{
    int n, month, days;
    cout << "Enter Year: ";
    cin >> n;
    month = n * 12;     // 1 year = 12 months
    days = n * 365;     // 1 year = 365 days
    cout << "\nYear = " << n;
    cout << "\nMonth = " << month;
    cout << "\nDays = " << days;
}

/*
Sample Input:
2

Output:
Enter Year: 
Year = 2
Month = 24
Days = 730
*/
