// Assignment 4: Product Information and Bill Calculation
// Input: Product name, rate, and quantity
// Output: Total amount (rate * quantity)

#include<iostream>
using namespace std;

main()
{
    char productName[30];
    float rate;
    int quantity, totalAmount;
    
    cout << "=== Product Information ===\n";
    
    cout << "Enter Product Name: ";
    cin >> productName;
    cout << "Enter Rate of Product: ";
    cin >> rate;
    cout << "Enter Quantity: ";
    cin >> quantity;
    
    totalAmount = rate * quantity;  // Calculate total amount
    
    cout << "\n=== BILL ===";
    cout << "\nProduct Name: " << productName;
    cout << "\nRate: " << rate;
    cout << "\nQuantity: " << quantity;
    cout << "\nTotal Amount: " << totalAmount;
}

/*
Sample Input:
Notebook
50
5

Output:
=== Product Information ===
Enter Product Name: Enter Rate of Product: Enter Quantity: 

=== BILL ===
Product Name: Notebook
Rate: 50
Quantity: 5
Total Amount: 250
*/
