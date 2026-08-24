// Assignment 3: Student Marksheet
// Input: Student details and marks
// Output: Marksheet with total and percentage

#include<iostream>
using namespace std;

main()
{
    char name[20], rollNo[10];
    int subject1, subject2, subject3, total;
    float percentage;
    
    cout << "=== Student Marksheet ===\n";
    
    cout << "Enter Student Name: ";
    cin >> name;
    cout << "Enter Roll Number: ";
    cin >> rollNo;
    
    cout << "\nEnter marks for Subject 1: ";
    cin >> subject1;
    cout << "Enter marks for Subject 2: ";
    cin >> subject2;
    cout << "Enter marks for Subject 3: ";
    cin >> subject3;
    
    total = subject1 + subject2 + subject3;
    percentage = (total / 300.0) * 100;  // Assuming max 100 per subject
    
    cout << "\n=== MARKSHEET ===";
    cout << "\nName: " << name;
    cout << "\nRoll No: " << rollNo;
    cout << "\nSubject 1: " << subject1;
    cout << "\nSubject 2: " << subject2;
    cout << "\nSubject 3: " << subject3;
    cout << "\nTotal: " << total;
    cout << "\nPercentage: " << percentage << "%";
}

/*
Sample Input:
Ajay
101
85
90
88

Output:
=== Student Marksheet ===
Enter Student Name: Enter Roll Number: 
Enter marks for Subject 1: Enter marks for Subject 2: Enter marks for Subject 3: 

=== MARKSHEET ===
Name: Ajay
Roll No: 101
Subject 1: 85
Subject 2: 90
Subject 3: 88
Total: 263
Percentage: 87.6667%
*/
