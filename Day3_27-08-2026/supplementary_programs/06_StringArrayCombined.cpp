// Day 3 - Supplementary Example 6: String-Array Combined Operations
// Demonstrates: Working with strings in arrays

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    cout << "=== String and Array Operations ===\n";
    
    // Example 1: Array of strings
    cout << "\nExample 1: Array of Names\n";
    char names[3][50] = {"Alice", "Bob", "Charlie"};
    
    cout << "Names in array:\n";
    for(int i = 0; i < 3; i++)
        cout << (i + 1) << ". " << names[i] << endl;
    
    // Example 2: Longest string
    cout << "\nExample 2: Longest String\n";
    int max_len = strlen(names[0]);
    int max_index = 0;
    
    for(int i = 1; i < 3; i++)
    {
        if(strlen(names[i]) > max_len)
        {
            max_len = strlen(names[i]);
            max_index = i;
        }
    }
    
    cout << "Longest name: " << names[max_index];
    cout << " (" << max_len << " characters)";
    
    // Example 3: Total length
    cout << "\nExample 3: Total Characters\n";
    int total = 0;
    for(int i = 0; i < 3; i++)
        total += strlen(names[i]);
    
    cout << "Total characters in all names: " << total;
    
    // Example 4: Character frequency
    cout << "\nExample 4: Character 'a' Count\n";
    for(int i = 0; i < 3; i++)
    {
        int count = 0;
        for(int j = 0; j < strlen(names[i]); j++)
        {
            if(tolower(names[i][j]) == 'a')
                count++;
        }
        cout << names[i] << " has " << count << " 'a's" << endl;
    }
    
    // Example 5: Reverse each name
    cout << "\nExample 5: Reverse Each Name\n";
    for(int i = 0; i < 3; i++)
    {
        char temp[50];
        strcpy(temp, names[i]);
        strrev(temp);
        cout << names[i] << " -> " << temp << endl;
    }
    
    // Example 6: Uppercase version
    cout << "\nExample 6: Names in Uppercase\n";
    for(int i = 0; i < 3; i++)
    {
        char temp[50];
        strcpy(temp, names[i]);
        strupr(temp);
        cout << temp << endl;
    }
    
    return 0;
}

/*
Output:
=== String and Array Operations ===

Example 1: Array of Names
Names in array:
1. Alice
2. Bob
3. Charlie

Example 2: Longest String
Longest name: Charlie (7 characters)

Example 3: Total Characters
Total characters in all names: 14

Example 4: Character 'a' Count
Alice has 1 'a's
Bob has 0 'a's
Charlie has 1 'a's

Example 5: Reverse Each Name
Alice -> ecilA
Bob -> boB
Charlie -> eilrahC

Example 6: Names in Uppercase
ALICE
BOB
CHARLIE
*/
