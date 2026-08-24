# Day 1: C++ Basics - 24-08-2026

## Topics Covered

### 1. C++ Overview
- **C++** is an extended version of C Programming
- **C** is POP (Procedure Oriented Programming)
- **C++** is OOP (Object-Oriented Programming)

### 2. What is a Program?
- A set of instructions
- Used to perform a specific task
- Executes one instruction after another
- **Purpose:** One-time creation, multiple uses
- **Cycle:** Create → Compile → Output

### 3. C++ Features
1. **Case Sensitive** - All programs written in lowercase (by convention)
2. **32 Keywords** - Reserved words with fixed purposes
3. **Execution Flow** - Top to Bottom (standard), Bottom to Top (with OOP)

### 4. Program Structure
```cpp
#include<header file>     // Include libraries
main()                      // Entry point
{
    variable define;        // Declare variables
    Input statement;        // Take input
    Process statement;      // Do calculations
    Output statement;       // Display results
}
```

### 5. Symbols & Brackets
| Symbol | Purpose |
|--------|----------|
| `()` | Function arguments |
| `{}` | Group/Block definition |
| `[]` | Array size definition |
| `<>` | Header file reference |

### 6. Variables
- **Definition:** Storage location for data
- **Declaration:** Must be done with a datatype
- **Default Value:** Garbage value (if not initialized)
- **Space Complexity** depends on variables
- **Time Complexity** depends on loops

#### Data Types & Capacity
| Type | Size | Range |
|------|------|-------|
| `int` | 4 bytes | -2,147,483,648 to 2,147,483,647 |
| `long int` | 8 bytes | Much larger range |
| `float` | 4 bytes | Decimal numbers |
| `double` / `long float` | 8 bytes | More precision decimals |
| `char` | 1 byte | Single character |

#### Variable Declaration Rules
✅ **Valid:**
- `int a;`
- `int a, b, c;`
- `int rollNo;`
- `int roll_no;` (underscore allowed)
- `int a1, x3;`
- `int A;` (uppercase allowed)

❌ **Invalid:**
- `int roll no;` (space not allowed)
- `int 3x;` (starts with number)
- `int #a;` (special character)
- `int 5;` (number alone)

### 7. Operators

#### Arithmetic Operators
```
+  Addition
-  Subtraction
*  Multiplication
/  Division
%  Modulus (remainder)
```
Example: `a=10, b=2`
- `a+b = 12`
- `a-b = 8`
- `a*b = 20`
- `a/b = 5`
- `a%b = 0`

#### Unary Operators
```
++  Increment by 1
--  Decrement by 1
```
Example:
- `a++` → `a = a + 1` → 11
- `a--` → `a = a - 1` → 9

#### Assignment (Comparison) Operators
```
==  Equal to
!=  Not equal to
>   Greater than
>=  Greater than or equal to
<   Less than
<=  Less than or equal to
```

#### Logical Operators
```
&&  AND (both must be true)
||  OR (at least one true)
!   NOT (negate)
```

### 8. Functions
- Every function requires parameters
- Functions return specific values
- **Two types:**
  1. **Standard Functions** - Pre-built, fixed syntax, need header files
  2. **User-Defined Functions (UDF)** - Created by user

### 9. Input/Output in C++

#### cin (Console Input)
- Stands for **console input**
- Takes values from user via console
- Works with dynamic variables and arrays

**Syntax:**
```cpp
cin >> variable_name;
```

#### cout (Console Output)
- Stands for **console output**
- Prints messages or variable values
- Uses `endl` or `\n` for new line

**Syntax:**
```cpp
cout << "Message";
cout << variable;
```

**Note:** `cin` and `cout` require `#include<iostream>` header file

### 10. Key Concepts Summary
- iostream = istream + ostream + stream
- Always initialize variables before use
- Follow naming conventions (lowercase, underscores)
- Understand datatype capacity for your use case
- Use appropriate operators for your logic

---

## Next Steps
- Practice all example programs
- Complete 4 assignments
- Understand flow of execution
- Prepare for control statements (if-else, loops)
