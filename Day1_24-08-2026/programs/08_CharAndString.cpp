// Program 8: Input and Output of Character and String
// Demonstrates: char datatype and array basics

#include<iostream>
#include<stdio.h>
using namespace std;

main()
{
    char s, name[20];
    
    cout << "Enter character: ";
    cin >> s;
    cout << "\nS = " << s;
    
    cout << "\nEnter Name: ";
    cin >> name;
    cout << "\nName = " << name;
    
    // Alternative method using gets()
    // cout << "\nEnter Name (using gets): ";
    // gets(name);
    // cout << "\nName = " << name;
}

/*
Sample Input:
A
CDAC

Output:
Enter character: 
S = A
Enter Name: 
Name = CDAC
*/
