// Supplementary Example 2: Pre vs Post Increment/Decrement
// Demonstrates: ++a vs a++, --a vs a--

#include<iostream>
using namespace std;

int main()
{
    cout << "=== POST-INCREMENT vs PRE-INCREMENT ===\n";
    
    // Post-increment (a++)
    int a = 5;
    int b = a++;  // b gets 5, then a becomes 6
    cout << "Post-increment (a++): \n";
    cout << "  a = " << a << ", b = " << b << endl;
    cout << "  (b got value BEFORE increment)\n" << endl;
    
    // Pre-increment (++a)
    int x = 5;
    int y = ++x;  // x becomes 6 first, then y gets 6
    cout << "Pre-increment (++a): \n";
    cout << "  x = " << x << ", y = " << y << endl;
    cout << "  (y got value AFTER increment)\n" << endl;
    
    // Post-decrement (a--)
    int c = 10;
    int d = c--;  // d gets 10, then c becomes 9
    cout << "Post-decrement (a--): \n";
    cout << "  c = " << c << ", d = " << d << endl;
    cout << "  (d got value BEFORE decrement)\n" << endl;
    
    // Pre-decrement (--a)
    int p = 10;
    int q = --p;  // p becomes 9 first, then q gets 9
    cout << "Pre-decrement (--a): \n";
    cout << "  p = " << p << ", q = " << q << endl;
    cout << "  (q got value AFTER decrement)\n" << endl;
    
    // Simple usage (doesn't matter which)
    cout << "=== Simple Usage (Post/Pre doesn't matter) ===\n";
    int count = 0;
    count++;  // Just incrementing, no assignment
    cout << "count after count++: " << count << endl;
    
    return 0;
}

/*
Output:
=== POST-INCREMENT vs PRE-INCREMENT ===

Post-increment (a++):
  a = 6, b = 5
  (b got value BEFORE increment)

Pre-increment (++a):
  x = 6, y = 6
  (y got value AFTER increment)

Post-decrement (a--):
  c = 9, d = 10
  (d got value BEFORE decrement)

Pre-decrement (--a):
  p = 9, q = 9
  (q got value AFTER decrement)

=== Simple Usage (Post/Pre doesn't matter) ===
count after count++: 1
*/
