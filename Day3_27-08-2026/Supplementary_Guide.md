# Day 3: For Loops, Arrays & Strings - Supplementary Guide
## Missing Concepts & Deep Dive

---

## 1. For Loop Deep Dive

### Syntax Breakdown:
```cpp
for(initialization; condition; increment/decrement)
{
    // body
}
```

### Execution Order:
1. **First iteration:** initialization → condition → body → increment
2. **Subsequent iterations:** condition → body → increment

### Example:
```cpp
for(int i = 0; i < 3; i++)  // i=0, i<3, i++
{
    cout << i;  // Prints: 0 1 2
}
```

### Different Variations:

**Variation 1: Count Up**
```cpp
for(int i = 1; i <= 10; i++)
    cout << i;  // 1 2 3 ... 10
```

**Variation 2: Count Down**
```cpp
for(int i = 10; i >= 1; i--)
    cout << i;  // 10 9 8 ... 1
```

**Variation 3: Skip by 2 (Even numbers)**
```cpp
for(int i = 2; i <= 20; i += 2)
    cout << i;  // 2 4 6 8 ... 20
```

**Variation 4: No initialization (already initialized)**
```cpp
int i = 0;
for(; i < 5; i++)
    cout << i;  // 0 1 2 3 4
```

**Variation 5: Infinite loop**
```cpp
for(;;)  // No condition = infinite
{
    if(someCondition)
        break;
}
```

### Common Mistakes:

❌ **Mistake 1: Wrong comparison**
```cpp
for(int i = 0; i >= 5; i++)  // Always false! Loop never runs
```

❌ **Mistake 2: Forgetting increment**
```cpp
for(int i = 0; i < 5;)  // Missing i++, infinite loop!
{
    cout << i;
}
```

✅ **Correct:**
```cpp
for(int i = 0; i < 5; i++)  // Proper increment
    cout << i;
```

---

## 2. Nested For Loops - Row & Column Concept

### How Nested Loops Work:
```cpp
for(int i = 1; i <= 3; i++)  // Outer loop (ROWS)
{
    for(int j = 1; j <= 3; j++)  // Inner loop (COLUMNS)
    {
        cout << "(" << i << "," << j << ") ";
    }
    cout << "\n";
}

/*
Output:
(1,1) (1,2) (1,3)
(2,1) (2,2) (2,3)
(3,1) (3,2) (3,3)
*/
```

### Execution Flow:
- Outer loop runs: i = 1
  - Inner loop runs 3 times: j = 1, 2, 3
- Outer loop runs: i = 2
  - Inner loop runs 3 times: j = 1, 2, 3
- Outer loop runs: i = 3
  - Inner loop runs 3 times: j = 1, 2, 3

### Pattern Examples:

**Pattern 1: Square**
```cpp
for(int i = 1; i <= 3; i++)
{
    for(int j = 1; j <= 3; j++)
        cout << "* ";
    cout << "\n";
}
/*
* * *
* * *
* * *
*/
```

**Pattern 2: Triangle**
```cpp
for(int i = 1; i <= 5; i++)
{
    for(int j = 1; j <= i; j++)  // j depends on i
        cout << "* ";
    cout << "\n";
}
/*
*
* *
* * *
* * * *
* * * * *
*/
```

**Pattern 3: Inverted Triangle**
```cpp
for(int i = 5; i >= 1; i--)  // i decreases
{
    for(int j = 1; j <= i; j++)
        cout << "* ";
    cout << "\n";
}
/*
* * * * *
* * * *
* * *
* *
*
*/
```

---

## 3. Single Dimensional Arrays - Complete Understanding

### Declaration:
```cpp
// Static array (size fixed at compile time)
int arr[5];           // Uninitialized, contains garbage
int arr[5] = {1, 2, 3, 4, 5};  // Initialized
int arr[] = {10, 20, 30};       // Size deduced from initialization

// Dynamic array (size at runtime)
int arr[n];  // n must be const in C++, not runtime
```

### Memory Allocation:
```cpp
int arr[5];
// Memory: arr[0] arr[1] arr[2] arr[3] arr[4]
// Index:   0     1     2     3     4
// Address increases as index increases
```

### Accessing Elements:
```cpp
int arr[5] = {10, 20, 30, 40, 50};

cout << arr[0];    // 10
cout << arr[2];    // 30
cout << arr[4];    // 50
cout << arr[5];    // ERROR! Out of bounds (doesn't exist)
```

### Important Concepts:

**Concept 1: Index starts from 0**
```cpp
int arr[3] = {10, 20, 30};
arr[0] = 10;  // First element
arr[1] = 20;  // Second element
arr[2] = 30;  // Third element
```

**Concept 2: Array size is fixed**
```cpp
int arr[5];
// Can store exactly 5 elements, not more, not less
```

**Concept 3: Pass entire array to function**
```cpp
void printArray(int arr[], int size)  // arr[] means entire array
{
    for(int i = 0; i < size; i++)
        cout << arr[i];
}
```

### Common Array Operations:

**Operation 1: Sum of elements**
```cpp
int sum = 0;
for(int i = 0; i < 5; i++)
    sum += arr[i];
```

**Operation 2: Find maximum**
```cpp
int max = arr[0];
for(int i = 1; i < 5; i++)
    if(arr[i] > max)
        max = arr[i];
```

**Operation 3: Count occurrences**
```cpp
int count = 0;
for(int i = 0; i < 5; i++)
    if(arr[i] == searchValue)
        count++;
```

---

## 4. Strings as Character Arrays

### String Declaration:
```cpp
// As character array
char str[20] = "Hello";    // Size 20, stores "Hello\0"
char str[] = "Hi";         // Size auto (4: H, i, \0)

// Important: Last character is always '\0' (null terminator)
// This marks the end of string
```

### String vs Array:

| Aspect | Character Array | String |
|--------|-----------------|--------|
| Declaration | `char arr[5]` | `char str[20] = "Hi"` |
| Null terminator | No | Yes ('\0') |
| Access | `arr[0]` | `str[0]` |
| Length | Size we define | Actual length |

### String Functions:

**Function 1: strlen() - Get length**
```cpp
char str[] = "Hello";
int len = strlen(str);  // 5 (not counting \0)
```

**Function 2: strcpy() - Copy string**
```cpp
char source[] = "Hello";
char dest[20];
strcpy(dest, source);  // dest becomes "Hello"
```

**Function 3: strcat() - Concatenate (join) strings**
```cpp
char str1[20] = "Hello ";
char str2[] = "World";
strcat(str1, str2);  // str1 becomes "Hello World"
```

**Function 4: strcmp() - Compare strings**
```cpp
char str1[] = "Hello";
char str2[] = "Hello";

if(strcmp(str1, str2) == 0)
    cout << "Strings are equal";
else
    cout << "Strings are different";
```

**Function 5: toupper() & tolower() - Convert case**
```cpp
char ch = 'a';
cout << (char)toupper(ch);  // A

char ch2 = 'A';
cout << (char)tolower(ch2);  // a
```

**Function 6: strupr() & strlwr() - Entire string**
```cpp
char str[] = "Hello";
strupr(str);  // "HELLO"
strlwr(str);  // "hello"
```

### Important Notes:

⚠️ **Note 1: Always allocate enough space**
```cpp
char str[5] = "Hi";     // OK: "Hi\0" fits in 5
char str2[2] = "Hi";    // ERROR: "Hi\0" doesn't fit in 2
```

⚠️ **Note 2: Input/Output**
```cpp
char str[50];
cin >> str;              // Takes input until space
gets(str);               // Takes entire line (with spaces)
cout << str;             // Prints entire string
```

---

## 5. Input Validation for Arrays

### Validating Array Size:
```cpp
int n;
cout << "Enter array size (max 100): ";
cin >> n;

if(n <= 0 || n > 100)
{
    cout << "Invalid size!";
    return;
}

int arr[100];  // Must be const size in C++
```

### Validating Array Elements:
```cpp
int arr[5];
for(int i = 0; i < 5; i++)
{
    cout << "Enter element " << i << " (0-100): ";
    cin >> arr[i];
    
    if(arr[i] < 0 || arr[i] > 100)
    {
        cout << "Invalid! Enter again: ";
        cin >> arr[i];
    }
}
```

---

## 6. Array vs Vector Preview

### Why Arrays Have Limitations:

**Limitation 1: Fixed size**
```cpp
int arr[5];  // Always 5 elements, can't change
```

**Limitation 2: No built-in functions**
```cpp
// Can't easily sort, find, insert
// Have to write our own code
```

### Preview of Better Alternative (Vectors - later):
```cpp
// In future, you'll learn about vectors:
vector<int> v;  // Dynamic size
v.push_back(10);  // Can add elements
v.size();  // Get size easily
```

---

## 7. Common Array Patterns

### Pattern 1: Print all elements
```cpp
for(int i = 0; i < size; i++)
    cout << arr[i] << " ";
```

### Pattern 2: Sum of all elements
```cpp
int sum = 0;
for(int i = 0; i < size; i++)
    sum += arr[i];
```

### Pattern 3: Find max and min
```cpp
int max = arr[0], min = arr[0];
for(int i = 1; i < size; i++)
{
    if(arr[i] > max) max = arr[i];
    if(arr[i] < min) min = arr[i];
}
```

### Pattern 4: Count specific value
```cpp
int count = 0;
for(int i = 0; i < size; i++)
    if(arr[i] == value)
        count++;
```

### Pattern 5: Reverse an array
```cpp
for(int i = size - 1; i >= 0; i--)
    cout << arr[i] << " ";
```

### Pattern 6: Copy array
```cpp
int arr1[5] = {1, 2, 3, 4, 5};
int arr2[5];

for(int i = 0; i < 5; i++)
    arr2[i] = arr1[i];
```

---

## Summary

| Concept | Key Point |
|---------|----------|
| For Loop | Initialization, condition, increment in one line |
| Nested Loop | Outer controls rows, inner controls columns |
| Arrays | Fixed size, 0-indexed, contiguous memory |
| Strings | Character array with null terminator '\0' |
| String Functions | strlen, strcpy, strcat, strcmp, toupper, tolower |

---

## Common Mistakes

❌ Using index >= size
❌ Forgetting array initialization
❌ Buffer overflow in strings
❌ Forgetting null terminator
❌ Wrong loop range

✅ Always check array bounds
✅ Initialize arrays properly
✅ Allocate enough space for strings
✅ Use strlen() carefully
✅ Test with edge cases
