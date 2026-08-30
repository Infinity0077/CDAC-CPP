# Day 04 - Strings, 2D Arrays, Functions, Structure

## 1. Strings (1D char array)
- String is a character array ending with null character `\0`.
- String index starts from 0.
- String utilities generally from `<string.h>` / C-string library functions.

### Functions covered
1. `strlen(str)` -> length
2. `strupr(str)` -> uppercase
3. `strlwr(str)` -> lowercase
4. `strcpy(dest,src)` -> copy
5. `strcat(str1,str2)` -> concatenate
6. `strcmp(str1,str2)` -> compare (0 means equal)
7. `strrev(str)` -> reverse

## 2. String programs covered
- length and index-wise print
- upper/lower conversion
- copy one string to another
- join two strings
- compare two strings

## 3. Two Dimensional Array
- Stores data in matrix form (rows x columns).
- Needs two indices: row and column.
- Typically processed using nested loops.

Example:
```cpp
int a[3][2];
```

Operations covered:
- Input and print matrix
- Maximum element with row/column index

## 4. Functions (UDF)
- Function is a reusable block of code.
- Created once, used many times.
- Does not execute itself; must be called.

### Types
- With return type
- Without return type (`void`)

### Arguments
- Actual arguments: supplied at call
- Formal arguments: received in function definition

### Parameter passing
- Call by value
- Call by reference (pointer concept intro)

Programs covered:
- simple function call
- addition function with arguments
- square (return) and cube (void)
- passing array to function for sum

## 5. User Defined Datatype: Structure
- `struct` is a user-defined datatype.
- Defined outside `main()`.
- Executed/used via object in `main()`.
- Members accessed with `.` operator.

Programs covered:
- Book info using two objects
- Employee array in struct with total/average salary
