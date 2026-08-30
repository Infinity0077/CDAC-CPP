# Day 2: Control Statements & Loops - Supplementary Guide
## Missing Concepts & Deep Dive

---

## 1. Ternary Operator (Conditional Operator)

### What is it?
A shorthand way to write simple if-else statements in a single line.

### Syntax:
```cpp
variable = (condition) ? value_if_true : value_if_false;
```

### How it works:
- If condition is TRUE → returns value_if_true
- If condition is FALSE → returns value_if_false

### Example:
```cpp
int age = 20;
string status = (age >= 18) ? "Adult" : "Minor";
cout << status;  // Output: Adult
```

### Comparison with if-else:

**Traditional if-else:**
```cpp
int num = 15;
int result;
if(num > 10)
    result = 100;
else
    result = 0;
cout << result;  // 100
```

**Using Ternary Operator:**
```cpp
int num = 15;
int result = (num > 10) ? 100 : 0;
cout << result;  // 100 (same result, less code)
```

### Real-world Example:
```cpp
int marks = 45;
cout << (marks >= 40) ? "PASS" : "FAIL";  // Output: PASS

int price = 500;
int discount = (price > 1000) ? 100 : 50;
cout << discount;  // Output: 50
```

### When to use:
- Simple conditions (one line)
- Assigning different values based on condition
- NOT for complex logic (use if-else instead)

---

## 2. Break & Continue Statements

### Break Statement

**Purpose:** Immediately exits/terminates the loop

**Syntax:**
```cpp
for/while/do-while(condition)
{
    if(some_condition)
        break;  // Exit loop immediately
    // more code
}
```

**Example - Finding a number:**
```cpp
int arr[5] = {10, 20, 30, 40, 50};
int search = 30;

for(int i = 0; i < 5; i++)
{
    if(arr[i] == search)
    {
        cout << "Found at index " << i;
        break;  // Stop searching
    }
}
```

**Output:** Found at index 2

**Example - Input validation:**
```cpp
while(true)
{
    int num;
    cout << "Enter number (1-100): ";
    cin >> num;
    
    if(num >= 1 && num <= 100)
    {
        cout << "Valid!";
        break;  // Exit loop when valid
    }
    cout << "Invalid! Try again.\n";
}
```

### Continue Statement

**Purpose:** Skips current iteration and goes to next iteration

**Syntax:**
```cpp
for/while/do-while(condition)
{
    if(some_condition)
        continue;  // Skip this iteration
    // code here is skipped if continue executes
}
```

**Example - Print only odd numbers:**
```cpp
for(int i = 1; i <= 10; i++)
{
    if(i % 2 == 0)  // If even
        continue;   // Skip this iteration
    cout << i << " ";  // Only odd numbers printed
}
// Output: 1 3 5 7 9
```

**Example - Skip zeros in sum:**
```cpp
int arr[5] = {10, 0, 20, 0, 30};
int sum = 0;

for(int i = 0; i < 5; i++)
{
    if(arr[i] == 0)
        continue;  // Skip zero
    sum += arr[i];
}

cout << "Sum (excluding zeros): " << sum;  // 60
```

### Break vs Continue:

| Statement | Action | Loop Status |
|-----------|--------|-------------|
| `break` | Exit loop completely | Loop terminates |
| `continue` | Skip to next iteration | Loop continues |

**Side-by-side Example:**
```cpp
cout << "Break Example: ";
for(int i = 1; i <= 5; i++)
{
    if(i == 3)
        break;
    cout << i << " ";  // Output: 1 2
}

cout << "\nContinue Example: ";
for(int i = 1; i <= 5; i++)
{
    if(i == 3)
        continue;
    cout << i << " ";  // Output: 1 2 4 5
}
```

---

## 3. Switch vs If-Else: When to Use Each

### If-Else (Best for ranges):
```cpp
int age = 25;
if(age < 13)
    cout << "Child";
else if(age < 18)
    cout << "Teenager";
else if(age < 60)
    cout << "Adult";
else
    cout << "Senior";
```

### Switch (Best for exact values):
```cpp
int choice = 2;
switch(choice)
{
    case 1: cout << "Addition"; break;
    case 2: cout << "Subtraction"; break;
    case 3: cout << "Multiplication"; break;
    default: cout << "Invalid";
}
```

### Key Differences:

| Aspect | If-Else | Switch |
|--------|---------|--------|
| Best for | Ranges, conditions | Exact values |
| Comparison | Any operator (>, <, >=, etc) | Only == |
| Speed | Slower for many cases | Faster for many cases |
| Readability | Complex conditions harder | Menu options clearer |
| Data types | All | int, char, string |

---

## 4. Loop Comparison: While vs Do-While vs For

### While Loop
- Checks condition FIRST
- May not execute at all if condition is false

```cpp
int i = 1;
while(i <= 3)  // Condition checked first
{
    cout << i << " ";
    i++;
}  // Output: 1 2 3
```

### Do-While Loop
- Executes body FIRST, then checks condition
- Always executes at least once

```cpp
int i = 1;
do
{
    cout << i << " ";
    i++;
}
while(i <= 3);  // Output: 1 2 3 (even if condition was false first)
```

### For Loop
- All control in one line
- Initialization, condition, increment together
- Best when you know how many iterations

```cpp
for(int i = 1; i <= 3; i++)
{
    cout << i << " ";  // Output: 1 2 3
}
```

### When to Use:

| Loop | Best For | Example |
|------|----------|----------|
| While | Unknown count, event-based | Menu input, event waiting |
| Do-While | Need at least 1 execution | Input validation |
| For | Known count, sequences | Array iteration, 1 to n |

---

## 5. Nested If-Else Best Practices

### Problem with too many nesting:
```cpp
// Hard to read - too many levels
if(a > 0)
{
    if(b > 0)
    {
        if(c > 0)
        {
            cout << "All positive";
        }
    }
}
```

### Better approach using Logical Operators:
```cpp
// Cleaner - same logic
if(a > 0 && b > 0 && c > 0)
{
    cout << "All positive";
}
```

### Another improvement - Exit early:
```cpp
if(a <= 0 || b <= 0 || c <= 0)
{
    cout << "Not all positive";
    return;  // Exit early
}
cout << "All positive";
```

---

## 6. Common Loop Patterns

### Pattern 1: Sum or Count
```cpp
int sum = 0, count = 0;
for(int i = 0; i < n; i++)
{
    sum += arr[i];
    if(arr[i] > 0)
        count++;
}
```

### Pattern 2: Find Maximum/Minimum
```cpp
int max = arr[0];
for(int i = 1; i < n; i++)
{
    if(arr[i] > max)
        max = arr[i];
}
```

### Pattern 3: Search
```cpp
bool found = false;
for(int i = 0; i < n; i++)
{
    if(arr[i] == search_value)
    {
        found = true;
        break;
    }
}
```

### Pattern 4: Nested Loop (Matrix)
```cpp
for(int i = 0; i < rows; i++)
{
    for(int j = 0; j < cols; j++)
    {
        // Process matrix[i][j]
    }
}
```

---

## 7. Infinite Loops - What Causes Them (And How to Avoid)

### Common Mistakes:

**Mistake 1: Forgetting increment**
```cpp
int i = 0;
while(i < 10)  // i never changes!
{
    cout << i;
    // Missing i++
}  // INFINITE LOOP!
```

**Mistake 2: Wrong condition**
```cpp
for(int i = 0; i >= 0; i++)  // i always >= 0
{
    cout << i;
}  // INFINITE LOOP!
```

**Mistake 3: Condition always true**
```cpp
while(1)  // Always true!
{
    cout << "Stuck forever";
}  // INFINITE LOOP!
```

### How to Avoid:
- Always have an increment/decrement
- Check condition logic (< vs >)
- Use break statements for exit conditions

---

## 8. Debugging Tips for Loops

### Tip 1: Print at each iteration
```cpp
for(int i = 0; i < 5; i++)
{
    cout << "i = " << i << endl;  // Debug output
    // Your code
}
```

### Tip 2: Check boundary conditions
```cpp
// Check if loop starts correctly
if(i == 0)  // Should this be true?
    cout << "Starting iteration";

// Check if loop ends correctly
if(i == n-1)  // Should this be true?
    cout << "Last iteration";
```

### Tip 3: Verify increment
```cpp
for(int i = 0; i < 5; i++)
{
    cout << "Before increment: " << i << endl;
    // Your code
    cout << "After increment: " << (i+1) << endl;
}
```

---

## 9. Practical Examples

### Example 1: Prime Number Checker with Break
```cpp
int n = 17;
bool isPrime = true;

for(int i = 2; i < n; i++)
{
    if(n % i == 0)
    {
        isPrime = false;
        break;  // No need to check further
    }
}

cout << (isPrime ? "Prime" : "Not Prime");
```

### Example 2: Skip Even Numbers with Continue
```cpp
for(int i = 1; i <= 20; i++)
{
    if(i % 2 == 0)  // If even
        continue;   // Skip to next
    cout << i << " ";  // Print only odd
}
// Output: 1 3 5 7 9 11 13 15 17 19
```

### Example 3: Using Ternary in Loop
```cpp
for(int i = 0; i < 10; i++)
{
    string type = (i % 2 == 0) ? "Even" : "Odd";
    cout << i << " is " << type << endl;
}
```

---

## Summary

| Concept | Purpose | Key Point |
|---------|---------|----------|
| Ternary | One-line if-else | Use for simple assignments |
| Break | Exit loop | Stops loop completely |
| Continue | Skip iteration | Moves to next iteration |
| Switch | Menu-driven | Best for exact values |
| While | Pre-check condition | May not execute |
| Do-While | Post-check condition | Executes at least once |
| For | Known iterations | Best for sequences |

---

## Common Mistakes to Avoid

❌ Forgetting `break` in switch cases
❌ Using `continue` when you meant `break`
❌ Infinite loops (forgetting increment)
❌ Wrong loop type for the problem
❌ Nesting loops too deeply

✅ Use ternary only for simple conditions
✅ Use break to exit early
✅ Use continue to skip iterations
✅ Choose appropriate loop type
✅ Keep nesting levels low
