# Day 1 - Supplementary Assignments
## Based on Concepts: Compound Operators, Pre/Post Increment, Advanced I/O, Initialization, and Validation

---

## Supplementary Assignment 1: Bank Account Update
**Difficulty:** Easy

**Problem:**
Your bank account has an initial balance. You receive a bonus, spend some money, and earn interest.
Calculate the final balance using compound operators.

**Requirements:**
- Take initial balance from user
- Add a bonus amount (use +=)
- Subtract expenses (use -=)
- Calculate interest on remaining amount and add (use +=)
- Display final balance

**Formula:**
- Final balance = Initial balance + Bonus - Expenses + Interest
- Interest = (balance after bonus and expenses) * 0.05 (5% interest)

**Sample Input:**
```
Initial Balance: 5000
Bonus: 1000
Expenses: 500
```

**Expected Output:**
```
Initial Balance: 5000
After Bonus: 6000
After Expenses: 5500
Interest (5%): 275
Final Balance: 5775
```

---

## Supplementary Assignment 2: Increment/Decrement Tracker
**Difficulty:** Easy-Medium

**Problem:**
Track a counter that starts at 0 and understand the difference between pre and post increment.

**Requirements:**
- Start with counter = 0
- Use post-increment (counter++) to show value BEFORE increment
- Display counter after each operation
- Show how pre-increment (++counter) would differ
- Perform 5 operations

**Sample Output:**
```
Starting counter: 0

Operation 1 (counter++): 0 (but counter is now 1)
Operation 2 (counter++): 1 (but counter is now 2)
Operation 3 (++counter): 3 (incremented first)
Final counter value: 3
```

---

## Supplementary Assignment 3: Product Discount Calculator
**Difficulty:** Medium

**Problem:**
Calculate final price after applying discount using compound operators and validation.

**Requirements:**
- Take product price and discount percentage from user
- Validate: Price should be > 0 and <= 100000
- Validate: Discount should be >= 0 and <= 100
- Calculate discount amount (use *=)
- Subtract from price (use -=)
- Add tax (use +=) if final price > 1000
- Display with proper formatting

**Sample Input:**
```
Original Price: 5000
Discount %: 20
```

**Expected Output:**
```
Original Price: 5000
Discount (20%): 1000
Price after Discount: 4000
Tax (5%): 200
Final Price: 4200
```

---

## Supplementary Assignment 4: Age Group Validator
**Difficulty:** Easy

**Problem:**
Validate age input and categorize into age groups.

**Requirements:**
- Take age from user
- Validate: Age should be between 0 and 120
- Display appropriate message if invalid
- If valid, display age group:
  - 0-5: Infant
  - 6-12: Child
  - 13-19: Teenager
  - 20-60: Adult
  - 60+: Senior

**Sample Input 1 (Valid):**
```
Enter your age: 25
```

**Expected Output 1:**
```
You are 25 years old
Age Group: Adult
```

**Sample Input 2 (Invalid):**
```
Enter your age: 150
```

**Expected Output 2:**
```
Invalid age! Age must be between 0 and 120
```

---

## Supplementary Assignment 5: Grade Calculator with Validation
**Difficulty:** Medium

**Problem:**
Take student marks for 4 subjects, validate each, calculate total and percentage, and assign grade.

**Requirements:**
- Take marks for 4 subjects (each 0-100)
- Validate each mark
- If any mark is invalid, show error and exit
- Calculate total (use +=)
- Calculate percentage
- Assign grade:
  - 90-100: A
  - 80-89: B
  - 70-79: C
  - 60-69: D
  - Below 60: F

**Sample Input:**
```
Enter marks for Subject 1: 85
Enter marks for Subject 2: 90
Enter marks for Subject 3: 78
Enter marks for Subject 4: 88
```

**Expected Output:**
```
Subject 1: 85
Subject 2: 90
Subject 3: 78
Subject 4: 88

Total Marks: 341
Percentage: 85.25%
Grade: A
Result: PASS
```

---

## Supplementary Assignment 6: Temperature Converter with Validation
**Difficulty:** Medium

**Problem:**
Convert temperature between Celsius and Fahrenheit with validation.

**Requirements:**
- Ask user which conversion (C to F or F to C)
- Take temperature value
- Validate: 
  - Celsius should be >= -273 (absolute zero)
  - Fahrenheit should be >= -459
- Calculate conversion
- Display result with proper label

**Formulas:**
- C to F: (C × 9/5) + 32
- F to C: (F - 32) × 5/9

**Sample Input 1:**
```
Convert:
1. Celsius to Fahrenheit
2. Fahrenheit to Celsius
Enter choice (1 or 2): 1
Enter temperature in Celsius: 25
```

**Expected Output 1:**
```
25°C = 77°F
```

**Sample Input 2 (Invalid):**
```
Enter choice (1 or 2): 1
Enter temperature in Celsius: -300
```

**Expected Output 2:**
```
Invalid temperature! Celsius must be >= -273 (absolute zero)
```

---

## Supplementary Assignment 7: Compound Interest Calculator
**Difficulty:** Medium-Hard

**Problem:**
Calculate compound interest using compound operators and proper initialization.

**Requirements:**
- Take Principal, Rate, Time (in years), and Compounding frequency
- Validate all inputs (P > 0, R >= 0, T > 0, Frequency valid)
- Use compound operators where applicable
- Calculate: A = P(1 + r/n)^(nt)
  - A = Final Amount
  - P = Principal (initial amount)
  - r = Rate (annual, as decimal)
  - n = Number of times interest compounds per year (1=yearly, 4=quarterly, 12=monthly)
  - t = Time in years
- Display Principal, Rate, Time, Frequency, Final Amount, and Compound Interest

**Sample Input:**
```
Principal: 10000
Annual Rate (%): 5
Time (years): 2
Compounding Frequency (1=Yearly, 4=Quarterly, 12=Monthly): 4
```

**Expected Output:**
```
Principal: 10000
Rate: 5% per annum
Time: 2 years
Compounding: Quarterly

Final Amount: 11048.96
Compound Interest: 1048.96
```

---

## Supplementary Assignment 8: Calculator with Multiple Operations
**Difficulty:** Hard

**Problem:**
Create a simple calculator that performs multiple operations using compound operators and proper I/O.

**Requirements:**
- Take two numbers from user
- Perform all operations: +, -, *, /, %, using compound operators
- Show step-by-step calculation
- Validate inputs (numbers should be valid)
- Display all results in formatted way

**Sample Input:**
```
Enter first number: 20
Enter second number: 3
```

**Expected Output:**
```
========== CALCULATOR ==========
Number 1: 20
Number 2: 3

Operations:
Addition (20 + 3): 23
Subtraction (20 - 3): 17
Multiplication (20 * 3): 60
Division (20 / 3): 6
Modulus (20 % 3): 2

Square of Number 1: 400
Square of Number 2: 9

Sum of all results: 477
================================
```

---

## How to Solve These Assignments

1. **Read the problem carefully** - Understand what's required
2. **Plan your variables** - What data types do you need?
3. **Initialize variables** - Don't leave them uninitialized!
4. **Take input** - Use proper prompts with cout
5. **Validate input** - Check if values are reasonable
6. **Calculate** - Use compound operators where possible
7. **Display results** - Format output clearly
8. **Test with different inputs** - Try both valid and invalid data

---

## Key Concepts Used
- Compound Assignment Operators (+=, -=, *=, /=, %=)
- Pre/Post Increment/Decrement (++, --)
- Advanced cin & cout usage
- Input Validation (if statements)
- Variable Initialization
- Proper formatting of output

---

**Remember:** Practice these step by step. Once you complete these, you'll be solid on Day 1 concepts!
