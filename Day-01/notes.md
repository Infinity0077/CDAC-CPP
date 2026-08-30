# Day 01 - C++ Basics, Program Structure, Variables, Datatypes, I/O

## 1. Introduction to C++
- C++ is an extension of C language.
- C follows POP (Procedure Oriented Programming).
- C++ supports OOP (Object Oriented Programming).
- C++ is case-sensitive.

## 2. Program and Purpose
- A program is a set of instructions to perform a specific task.
- Main goal: write once, use multiple times.
- Basic flow: **Create -> Compile -> Output**.

## 3. Basic Program Structure
```cpp
#include<iostream>
using namespace std;

main()
{
    // variable declaration
    // input
    // process
    // output
}
```
- `main()` is the entry point.
- Symbols:
  - `()` function arguments
  - `{}` block/group
  - `[]` array size/index
  - `<>` header file enclosure

## 4. Variables and Datatypes
- Variable: placeholder to store data.
- Datatype defines what kind of value a variable stores.
- Uninitialized local variables may contain garbage values.

### Common Datatypes
| Datatype | Typical Size |
|---|---|
| int | 4 bytes |
| long int | 8 bytes |
| float | 4 bytes |
| double | 8 bytes |
| char | 1 byte |

### Variable naming rules
- Valid: `a`, `rollNo`, `roll_no`, `a1`, `A`
- Invalid: `roll no`, `3x`, `#a`, `5`

## 5. Operators
### Arithmetic
`+`, `-`, `*`, `/`, `%`

### Unary
`++`, `--`

### Relational/Comparison
`==`, `!=`, `>`, `>=`, `<`, `<=`

### Logical
`&&`, `||`, `!`

## 6. Input/Output in C++
- `cin` -> input from console
- `cout` -> output to console
- `endl` or `\n` -> new line

Example:
```cpp
int a,b;
cin>>a>>b;
cout<<"Addition="<<(a+b);
```

## 7. Standard vs User Defined Function (intro)
- Standard functions: predefined, need proper header file.
- User Defined Functions: created by programmer.

## 8. Practice focus from class
- Addition of two numbers
- Square/cube of number
- Year to month/day conversion
- FD simple interest formula
- Character and string input basics
