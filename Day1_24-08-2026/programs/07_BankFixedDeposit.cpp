// Program 7: Bank Fixed Deposit - Simple Interest Calculator
// Demonstrates: Multiple data types and formula implementation
// Formula: SI = (P * R * N) / 100, Amount = P + SI

#include<iostream>
using namespace std;

main()
{
    int p, n;           // Principal and Number of years
    float r, si, amount;// Rate, Simple Interest, Total Amount
    
    cout << "Enter principal amount: ";
    cin >> p;
    cout << "Enter Rate of interest: ";
    cin >> r;
    cout << "Enter Number of years: ";
    cin >> n;
    
    si = (p * r * n) / 100;     // Simple Interest Formula
    amount = p + si;             // Total Amount
    
    cout << "\nSimple Interest = " << si;
    cout << "\nAmount = " << amount;
}

/*
Sample Input:
1000
5
2

Output:
Enter principal amount: 
Enter Rate of interest: 
Enter Number of years: 
Simple Interest = 100
Amount = 1100
*/
