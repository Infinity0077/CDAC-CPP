// Assignment 1: Convert Rupees to Paisa
// 1 Rupee = 100 Paisa

#include<iostream>
using namespace std;

main()
{
    int rupees, paisa;
    
    cout << "Enter amount in Rupees: ";
    cin >> rupees;
    
    paisa = rupees * 100;  // Convert rupees to paisa
    
    cout << "\nRupees: " << rupees;
    cout << "\nPaisa: " << paisa;
}

/*
Sample Input:
5

Output:
Enter amount in Rupees: 
Rupees: 5
Paisa: 500
*/
