// Assignment 2: Convert Hours to Minutes and Seconds
// 1 Hour = 60 Minutes
// 1 Minute = 60 Seconds
// 1 Hour = 3600 Seconds

#include<iostream>
using namespace std;

main()
{
    int hours, minutes, seconds;
    
    cout << "Enter time in Hours: ";
    cin >> hours;
    
    minutes = hours * 60;       // Convert hours to minutes
    seconds = hours * 3600;     // Convert hours to seconds
    
    cout << "\nHours: " << hours;
    cout << "\nMinutes: " << minutes;
    cout << "\nSeconds: " << seconds;
}

/*
Sample Input:
2

Output:
Enter time in Hours: 
Hours: 2
Minutes: 120
Seconds: 7200
*/
