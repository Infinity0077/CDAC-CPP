// Day 3 - Supplementary Example 3: String Operations
// Demonstrates: String functions and string manipulation

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    cout << "=== String Operations ===\n";
    
    // Operation 1: String length
    char str1[] = "Hello World";
    cout << "\nString: " << str1;
    cout << "\nLength: " << strlen(str1);
    
    // Operation 2: Print string character by character
    cout << "\nCharacters: ";
    for(int i = 0; i < strlen(str1); i++)
        cout << str1[i] << " ";
    
    // Operation 3: Copy string
    char str2[50];
    strcpy(str2, str1);
    cout << "\n\nCopied string: " << str2;
    
    // Operation 4: Concatenate strings
    char str3[50] = "Good ";
    char str4[] = "Morning";
    strcat(str3, str4);
    cout << "\nConcatenated: " << str3;
    
    // Operation 5: Compare strings
    char str5[] = "Hello";
    char str6[] = "Hello";
    char str7[] = "World";
    
    cout << "\n\nComparison:";
    if(strcmp(str5, str6) == 0)
        cout << "\n'" << str5 << "' and '" << str6 << "' are equal";
    
    if(strcmp(str5, str7) != 0)
        cout << "\n'" << str5 << "' and '" << str7 << "' are different";
    
    // Operation 6: Convert to uppercase
    char str8[] = "convert me";
    cout << "\n\nOriginal: " << str8;
    strupr(str8);
    cout << "\nUppercase: " << str8;
    
    // Operation 7: Convert to lowercase
    char str9[] = "CONVERT ME";
    cout << "\n\nOriginal: " << str9;
    strlwr(str9);
    cout << "\nLowercase: " << str9;
    
    // Operation 8: Reverse string
    char str10[] = "Reverse";
    cout << "\n\nOriginal: " << str10;
    strrev(str10);
    cout << "\nReversed: " << str10;
    
    // Operation 9: Count vowels
    char str11[] = "Hello World";
    int vowel_count = 0;
    cout << "\n\nCounting vowels in '" << str11 << "':";
    
    for(int i = 0; i < strlen(str11); i++)
    {
        char ch = tolower(str11[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            vowel_count++;
            cout << " " << ch;
        }
    }
    cout << "\nTotal vowels: " << vowel_count;
    
    // Operation 10: Check palindrome
    char str12[] = "racecar";
    char temp[50];
    strcpy(temp, str12);
    strrev(temp);
    
    cout << "\n\nString: " << str12;
    if(strcmp(str12, temp) == 0)
        cout << " is a palindrome";
    else
        cout << " is not a palindrome";
    
    return 0;
}

/*
Output:
=== String Operations ===

String: Hello World
Length: 11
Characters: H e l l o   W o r l d

Copied string: Hello World

Concatenated: Good Morning

Comparison:
'Hello' and 'Hello' are equal
'Hello' and 'World' are different

Original: convert me
Uppercase: CONVERT ME

Original: CONVERT ME
Lowercase: convert me

Original: Reverse
Reversed: esreveR

Counting vowels in 'Hello World': e o o
Total vowels: 3

String: racecar is a palindrome
*/
