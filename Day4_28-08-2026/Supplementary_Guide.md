# Day 4: Strings, 2D Arrays, Functions & Structs - Supplementary Guide
## Missing Concepts & Deep Dive

---

## 1. Advanced String Manipulation

### String as Character Array
```cpp
char str[20] = "Hello";
// In memory: H e l l o \0 (garbage values after)
// Index:     0 1 2 3 4  5
```

### Iterating Through String
```cpp
char str[] = "Hello";

// Method 1: Using strlen()
for(int i = 0; i < strlen(str); i++)
    cout << str[i];

// Method 2: Until null terminator
for(int i = 0; str[i] != '\0'; i++)
    cout << str[i];
```

### String Modification
```cpp
char str[] = "Hello";

// Change character
str[0] = 'J';  // "Jello"

// Change multiple
for(int i = 0; i < strlen(str); i++)
    str[i] = toupper(str[i]);  // "JELLO"
```

### Finding Characters in String
```cpp
char str[] = "Hello World";
char search = 'o';

for(int i = 0; i < strlen(str); i++)
{
    if(str[i] == search)
    {
        cout << "Found at index: " << i;
        break;
    }
}
```

### Counting Specific Characters
```cpp
char str[] = "Hello World";
char search = 'l';
int count = 0;

for(int i = 0; i < strlen(str); i++)
{
    if(str[i] == search)
        count++;
}

cout << "Count: " << count;  // 3 (three l's)
```

---

## 2. Two-Dimensional Arrays - Complete Guide

### Declaration & Initialization
```cpp
// Static 2D array
int matrix[3][3];  // 3 rows, 3 columns
int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

// Memory layout:
// Row 0: [0][0]=1 [0][1]=2 [0][2]=3
// Row 1: [1][0]=4 [1][1]=5 [1][2]=6
// Row 2: [2][0]=7 [2][1]=8 [2][2]=9
```

### Accessing Elements
```cpp
int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

cout << matrix[0][0];  // 1 (row 0, column 0)
cout << matrix[1][2];  // 6 (row 1, column 2)
cout << matrix[2][1];  // 8 (row 2, column 1)
```

### Nested Loop Pattern
```cpp
int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

// Outer loop: rows
for(int i = 0; i < 3; i++)
{
    // Inner loop: columns
    for(int j = 0; j < 3; j++)
    {
        cout << matrix[i][j] << " ";
    }
    cout << "\n";  // New line after each row
}

/*
Output:
1 2 3
4 5 6
7 8 9
*/
```

### Common 2D Array Operations

**Operation 1: Sum of all elements**
```cpp
int sum = 0;
for(int i = 0; i < rows; i++)
    for(int j = 0; j < cols; j++)
        sum += matrix[i][j];
```

**Operation 2: Sum of a specific row**
```cpp
int row_num = 1;
int row_sum = 0;
for(int j = 0; j < cols; j++)
    row_sum += matrix[row_num][j];
```

**Operation 3: Sum of a specific column**
```cpp
int col_num = 2;
int col_sum = 0;
for(int i = 0; i < rows; i++)
    col_sum += matrix[i][col_num];
```

**Operation 4: Find maximum element**
```cpp
int max = matrix[0][0];
for(int i = 0; i < rows; i++)
    for(int j = 0; j < cols; j++)
        if(matrix[i][j] > max)
            max = matrix[i][j];
```

**Operation 5: Transpose matrix**
```cpp
// Original: 2x3, Transposed: 3x2
for(int i = 0; i < rows; i++)
    for(int j = 0; j < cols; j++)
        cout << matrix[j][i] << " ";  // Swap i and j
```

---

## 3. User-Defined Functions (UDF)

### Function Declaration & Definition
```cpp
// Syntax:
return_type function_name(parameter_type param1, parameter_type param2, ...)
{
    // Function body
    return value;  // If return_type is not void
}
```

### Types of Functions

**Type 1: No return, No parameters**
```cpp
void greet()
{
    cout << "Hello World!";
    // No return statement needed
}

int main()
{
    greet();  // Call function
    return 0;
}
```

**Type 2: No return, With parameters**
```cpp
void add(int a, int b)
{
    cout << "Sum: " << (a + b);
}

int main()
{
    add(10, 20);  // Output: Sum: 30
    return 0;
}
```

**Type 3: With return, With parameters**
```cpp
int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int result = multiply(5, 6);
    cout << result;  // Output: 30
    return 0;
}
```

### Pass by Value vs Pass by Reference

**Pass by Value (Default)**
```cpp
void change(int x)
{
    x = 100;  // Changes x inside function only
}

int main()
{
    int a = 5;
    change(a);
    cout << a;  // Still 5 (not changed)
    return 0;
}
```

**Pass by Reference (Using &)**
```cpp
void change(int &x)  // & means reference
{
    x = 100;  // Changes x outside function too
}

int main()
{
    int a = 5;
    change(a);
    cout << a;  // Now 100 (changed!)
    return 0;
}
```

### Functions with Arrays
```cpp
void printArray(int arr[], int size)  // Pass entire array
{
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    printArray(arr, 5);
    return 0;
}

// Note: arr[] means the entire array is passed by reference
```

---

## 4. Structures (Structs) - User-Defined Data Types

### Struct Declaration
```cpp
struct Student
{
    private:  // Optional in structs (default is public)
        // Data members
        int roll_no;
        char name[50];
        float gpa;
    
    public:  // Optional in structs
        // Member functions
        void input()
        {
            cout << "Enter roll number: ";
            cin >> roll_no;
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter GPA: ";
            cin >> gpa;
        }
        
        void display()
        {
            cout << "Roll: " << roll_no;
            cout << ", Name: " << name;
            cout << ", GPA: " << gpa << endl;
        }
};
```

### Creating Objects
```cpp
int main()
{
    Student s1, s2;  // Create two student objects
    
    s1.input();   // Call input function for s1
    s1.display(); // Call display function for s1
    
    return 0;
}
```

### Accessing Struct Members
```cpp
struct Person
{
    int age;
    char name[50];
};

int main()
{
    Person p1;
    
    // Assign values
    p1.age = 25;
    strcpy(p1.name, "Ajay");
    
    // Access values
    cout << p1.age;    // 25
    cout << p1.name;   // Ajay
    
    return 0;
}
```

### Struct vs Class

| Feature | Struct | Class |
|---------|--------|-------|
| Default Access | public | private |
| Purpose | Group related data | Encapsulation + behavior |
| Memory | Simple data grouping | Can be complex |
| OOP Features | Limited | Full |

---

## 5. Function Overloading (Introduction)

### What is Function Overloading?
Multiple functions with same name but different parameters

```cpp
// Function 1: Add two integers
int add(int a, int b)
{
    return a + b;
}

// Function 2: Add two floats (SAME NAME, different parameters)
float add(float a, float b)
{
    return a + b;
}

// Function 3: Add three integers (SAME NAME, different parameters)
int add(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    cout << add(5, 10);           // Calls Function 1
    cout << add(5.5, 10.5);       // Calls Function 2
    cout << add(5, 10, 15);       // Calls Function 3
    
    return 0;
}
```

### How Compiler Decides
- Compiler looks at parameter COUNT
- Compiler looks at parameter TYPES
- Calls the matching function

---

## 6. Scope of Variables

### Local Scope
```cpp
int main()
{
    int x = 10;  // Local to main()
    
    if(true)
    {
        int y = 20;  // Local to if block
        cout << y;   // OK
    }
    
    cout << y;  // ERROR! y not accessible here
    return 0;
}
```

### Global Scope
```cpp
int globalVar = 100;  // Global - accessible everywhere

void func1()
{
    cout << globalVar;  // OK
}

int main()
{
    cout << globalVar;  // OK
    func1();
    return 0;
}
```

### Function Scope
```cpp
void add(int a, int b)  // a and b are local to add()
{
    cout << a + b;
}

int main()
{
    add(5, 10);
    cout << a;  // ERROR! a not defined here
    return 0;
}
```

---

## 7. Common String Patterns

### Pattern 1: Find and Replace
```cpp
char str[] = "Hello World";
char find = 'o';
char replace = '0';

for(int i = 0; i < strlen(str); i++)
{
    if(str[i] == find)
        str[i] = replace;
}

cout << str;  // Hell0 W0rld
```

### Pattern 2: Reverse String
```cpp
char str[] = "Hello";

for(int i = strlen(str) - 1; i >= 0; i--)
    cout << str[i];  // olleH
```

### Pattern 3: Check Palindrome
```cpp
char str[] = "racecar";
bool isPalindrome = true;
int len = strlen(str);

for(int i = 0; i < len / 2; i++)
{
    if(str[i] != str[len - 1 - i])
    {
        isPalindrome = false;
        break;
    }
}

if(isPalindrome)
    cout << "Palindrome";
else
    cout << "Not Palindrome";
```

---

## Summary

| Concept | Key Point |
|---------|----------|
| Strings | Char arrays with null terminator '\0' |
| 2D Arrays | Rows and columns, nested loops required |
| Functions | Code reusability, pass by value/reference |
| Structs | Group related data together |
| Overloading | Same name, different parameters |
| Scope | Where variables are accessible |

---

## Common Mistakes

❌ Forgetting null terminator in strings
❌ Wrong array indexing in 2D arrays
❌ Not returning value from non-void function
❌ Confusing pass by value with pass by reference
❌ Accessing out-of-scope variables

✅ Always check string bounds
✅ Use nested loops correctly for 2D arrays
✅ Match function parameters carefully
✅ Use references when you need to modify
✅ Understand scope before using variables
