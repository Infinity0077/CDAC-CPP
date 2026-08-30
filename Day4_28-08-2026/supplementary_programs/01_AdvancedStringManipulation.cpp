// Day 4 - Supplementary Example 1: Advanced String Manipulation
// Demonstrates: String finding, counting, and modification

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    cout << "=== Advanced String Manipulation ===\n";
    
    // Example 1: Find and replace character
    cout << "\nExample 1: Find and Replace\n";
    char str1[] = "Hello World";
    cout << "Original: " << str1;
    
    for(int i = 0; i < strlen(str1); i++)
    {
        if(str1[i] == 'o')
            str1[i] = '0';  // Replace 'o' with '0'
    }
    cout << "\nAfter replacement: " << str1;
    
    // Example 2: Count occurrences
    cout << "\n\nExample 2: Count Character Occurrences\n";
    char str2[] = "Mississippi";
    char search = 's';
    int count = 0;
    
    cout << "String: " << str2 << endl;
    for(int i = 0; i < strlen(str2); i++)
    {
        if(tolower(str2[i]) == search)
            count++;
    }
    cout << "Count of '" << search << "': " << count;
    
    // Example 3: Count vowels
    cout << "\n\nExample 3: Count Vowels\n";
    char str3[] = "Hello World";
    int vowel_count = 0;
    
    cout << "String: " << str3 << endl;
    cout << "Vowels: ";
    
    for(int i = 0; i < strlen(str3); i++)
    {
        char ch = tolower(str3[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            cout << ch << " ";
            vowel_count++;
        }
    }
    cout << "\nTotal vowels: " << vowel_count;
    
    // Example 4: Count spaces
    cout << "\n\nExample 4: Count Spaces\n";
    char str4[] = "Hello World Program";
    int space_count = 0;
    
    cout << "String: " << str4 << endl;
    for(int i = 0; i < strlen(str4); i++)
    {
        if(str4[i] == ' ')
            space_count++;
    }
    cout << "Total spaces: " << space_count;
    
    // Example 5: Replace spaces with dash
    cout << "\n\nExample 5: Replace Spaces with Dash\n";
    char str5[] = "Hello World Program";
    cout << "Original: " << str5;
    
    for(int i = 0; i < strlen(str5); i++)
    {
        if(str5[i] == ' ')
            str5[i] = '-';
    }
    cout << "\nModified: " << str5;
    
    return 0;
}

/*
Output:
=== Advanced String Manipulation ===

Example 1: Find and Replace
Original: Hello World
After replacement: Hell0 W0rld

Example 2: Count Character Occurrences
String: Mississippi
Count of 's': 4

Example 3: Count Vowels
String: Hello World
Vowels: e o o
Total vowels: 3

Example 4: Count Spaces
String: Hello World Program
Total spaces: 2

Example 5: Replace Spaces with Dash
Original: Hello World Program
Modified: Hello-World-Program
*/
