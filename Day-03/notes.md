# Day 03 - for Loop, Nested for, Patterns, 1D Array Basics

## 1. for Loop
A compact loop with initialization, condition, and increment/decrement in one line.

Syntax:
```cpp
for(initialization; condition; increment/decrement)
{
    // statements
}
```

Execution flow:
- First iteration: init -> condition -> body
- Next iterations: increment/decrement -> condition -> body

## 2. Applications practiced
- Print 1 to n
- Print n to 1
- Factorial with descending and ascending loops

## 3. Nested for Loop
- Outer loop controls rows.
- Inner loop controls columns/items in each row.
- Used heavily for pattern printing.

Patterns covered:
- Star triangle up/down
- Number incremental pattern
- Alphabet pair pattern like `Aa Bb Cc ...`

## 4. Arrays (1D)
- Array = collection of same datatype values.
- Stored in contiguous memory.
- Index starts at 0.
- Access requires index.

### Static array
```cpp
int a[5]={12,34,45,56,45};
```

### Dynamic input style
```cpp
int a[5];
for(i=0;i<5;i++) cin>>a[i];
```

## 5. Array operations covered
- Print all elements with index
- Sum and average
- Maximum value and index
- Sum of even elements
- Count odd elements

## 6. Intro to String Functions (concept start)
Mentioned functions:
- `strlen`
- `strupr`
- `strlwr`
- `strcpy`
- `strcat`
- `strcmp`
- `strrev`
