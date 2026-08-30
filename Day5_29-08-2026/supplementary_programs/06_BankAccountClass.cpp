// Day 5 - Supplementary Example 6: Complete Bank Account Class
// Demonstrates: Full OOP implementation with private/public, constructors, and operations

#include<iostream>
#include<string.h>
using namespace std;

class BankAccount
{
private:
    int accountNum;
    char holderName[50];
    float balance;
    
    // Private helper function
    void printBalance()
    {
        cout << "Current Balance: Rs." << balance << endl;
    }
    
public:
    // Constructor
    BankAccount(int accNum, char name[], float initialBalance)
    {
        accountNum = accNum;
        strcpy(holderName, name);
        balance = initialBalance;
        cout << "Account " << accountNum << " created for " << name << endl;
    }
    
    // Deposit function
    void deposit(float amount)
    {
        if(amount > 0)
        {
            balance += amount;
            cout << "\nDeposited: Rs." << amount << endl;
            printBalance();
        }
        else
        {
            cout << "\nInvalid deposit amount!\n";
        }
    }
    
    // Withdraw function
    void withdraw(float amount)
    {
        if(amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "\nWithdrawn: Rs." << amount << endl;
            printBalance();
        }
        else if(amount > balance)
        {
            cout << "\nInsufficient balance!\n";
        }
        else
        {
            cout << "\nInvalid withdrawal amount!\n";
        }
    }
    
    // Check balance
    float checkBalance()
    {
        return balance;
    }
    
    // Display account details
    void display()
    {
        cout << "\n=== Account Details ===\n";
        cout << "Account Number: " << accountNum << endl;
        cout << "Holder Name: " << holderName << endl;
        cout << "Balance: Rs." << balance << endl;
        cout << "========================\n";
    }
};

int main()
{
    cout << "=== Bank Account System ===\n";
    
    // Create account
    BankAccount acc1(1001, "Ajay Kumar", 5000);
    acc1.display();
    
    // Operations
    cout << "\n--- Operations ---\n";
    
    acc1.deposit(2000);
    acc1.deposit(1500);
    
    acc1.withdraw(1000);
    acc1.withdraw(500);
    
    // Check balance
    cout << "\nTotal balance: Rs." << acc1.checkBalance() << endl;
    
    // Try invalid operations
    cout << "\n--- Trying Invalid Operations ---\n";
    acc1.withdraw(10000);  // More than balance
    acc1.deposit(-500);    // Negative amount
    
    // Final display
    acc1.display();
    
    // Create another account
    cout << "\n--- Second Account ---\n";
    BankAccount acc2(1002, "Priya Singh", 10000);
    acc2.display();
    acc2.withdraw(3000);
    acc2.display();
    
    return 0;
}

/*
Output:
=== Bank Account System ===
Account 1001 created for Ajay Kumar

=== Account Details ===
Account Number: 1001
Holder Name: Ajay Kumar
Balance: Rs.5000
========================

--- Operations ---

Deposited: Rs.2000
Current Balance: Rs.7000

Deposited: Rs.1500
Current Balance: Rs.8500

Withdrawn: Rs.1000
Current Balance: Rs.7500

Withdrawn: Rs.500
Current Balance: Rs.7000

Total balance: Rs.7000

--- Trying Invalid Operations ---

Insufficient balance!

Invalid deposit amount!

=== Account Details ===
Account Number: 1001
Holder Name: Ajay Kumar
Balance: Rs.7000
========================

--- Second Account ---
Account 1002 created for Priya Singh

=== Account Details ===
Account Number: 1002
Holder Name: Priya Singh
Balance: Rs.10000
========================

Withdrawn: Rs.3000
Current Balance: Rs.7000

=== Account Details ===
Account Number: 1002
Holder Name: Priya Singh
Balance: Rs.7000
========================
*/
