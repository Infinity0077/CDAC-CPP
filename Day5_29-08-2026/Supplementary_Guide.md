# Day 5: OOP Basics, Classes, Objects & Constructors - Supplementary Guide
## Foundation for Object-Oriented Programming

---

## 1. Introduction to OOP (Object-Oriented Programming)

### What is OOP?
A programming paradigm based on **objects** and **classes** instead of just functions and logic.

### Why OOP?

**Procedure-Oriented (Day 1-4):**
```cpp
// Focus on functions
void printStudent(char name[], int roll, float gpa)
{
    cout << name << " " << roll << " " << gpa;
}

int main()
{
    printStudent("Ajay", 101, 8.5);
}
```

**Object-Oriented (Day 5+):**
```cpp
// Focus on objects with data + functions together
class Student
{
private:
    char name[50];
    int roll;
    float gpa;
public:
    void input() { cin >> name >> roll >> gpa; }
    void display() { cout << name << " " << roll << " " << gpa; }
};

int main()
{
    Student s1;
    s1.input();
    s1.display();
}
```

### Key Concepts in OOP

1. **Class:** Blueprint for objects
2. **Object:** Instance of a class
3. **Encapsulation:** Bundling data and functions
4. **Inheritance:** Reusing code from parent class
5. **Polymorphism:** Same function, different behaviors
6. **Abstraction:** Hiding complex details

---

## 2. Classes and Objects

### Class Declaration

```cpp
class ClassName
{
private:         // Only accessible within class
    // Data members (variables)
    int id;
    char name[50];
    
    // Member functions (only for internal use)
    void internalFunction() { }

public:          // Accessible from outside
    // Data members (usually avoid public data)
    // int publicData;  // Not recommended
    
    // Member functions (interface)
    void input() { }
    void display() { }
    
public:  // Can have multiple access specifiers
    void anotherFunction() { }
};
```

### Creating Objects

```cpp
Student s1;      // Create object s1
Student s2;      // Create object s2
Student s3;      // Create object s3

// Now s1, s2, s3 have their own data
// s1.id is different from s2.id
```

### Accessing Members

```cpp
class Student
{
public:
    int roll;
    void display() { cout << roll; }
};

int main()
{
    Student s;
    s.roll = 101;           // Access public data
    s.display();            // Call public function
    return 0;
}
```

---

## 3. Access Specifiers: Private vs Public

### Private (Default in Class)

```cpp
class SecretBox
{
private:
    int secret = 100;  // Can't access from outside
    
    void privateFunc()  // Can't call from outside
    {
        cout << secret;
    }
};

int main()
{
    SecretBox box;
    // box.secret = 50;      // ERROR!
    // box.privateFunc();    // ERROR!
    return 0;
}
```

### Public (Accessible from Outside)

```cpp
class OpenBox
{
public:
    int data = 100;  // Can access from outside
    
    void publicFunc()  // Can call from outside
    {
        cout << data;
    }
};

int main()
{
    OpenBox box;
    box.data = 50;        // OK
    box.publicFunc();     // OK
    return 0;
}
```

### Why Private?

Imagine a bank account:
```cpp
class BankAccount
{
private:
    float balance;  // Should be private!
    
public:
    void deposit(float amount) { balance += amount; }
    void withdraw(float amount) { balance -= amount; }
    float getBalance() { return balance; }
};

int main()
{
    BankAccount acc;
    acc.deposit(1000);
    // acc.balance = -9999;  // This should NOT be allowed!
    return 0;
}
```

---

## 4. Constructors - Automatic Initialization

### What is a Constructor?
- Special function called automatically when object is created
- Same name as class
- No return type (not even void)
- Initializes object's data members

### Types of Constructors

#### Type 1: Default Constructor (No Parameters)

```cpp
class Student
{
private:
    int roll;
    char name[50];
    float gpa;
    
public:
    Student()  // Default constructor
    {
        roll = 0;
        strcpy(name, "Unknown");
        gpa = 0.0;
        cout << "Default Constructor Called!\n";
    }
    
    void display()
    {
        cout << roll << " " << name << " " << gpa << endl;
    }
};

int main()
{
    Student s1;  // Constructor called automatically
    // Output: Default Constructor Called!
    
    s1.display();
    // Output: 0 Unknown 0
    
    return 0;
}
```

#### Type 2: Parameterized Constructor (With Parameters)

```cpp
class Student
{
private:
    int roll;
    char name[50];
    float gpa;
    
public:
    Student(int r, char n[], float g)  // Parameterized constructor
    {
        roll = r;
        strcpy(name, n);
        gpa = g;
        cout << "Parameterized Constructor Called!\n";
    }
    
    void display()
    {
        cout << roll << " " << name << " " << gpa << endl;
    }
};

int main()
{
    Student s1(101, "Ajay", 8.5);
    // Output: Parameterized Constructor Called!
    
    s1.display();
    // Output: 101 Ajay 8.5
    
    return 0;
}
```

#### Type 3: Copy Constructor

```cpp
class Student
{
private:
    int roll;
    char name[50];
    
public:
    Student(int r, char n[])
    {
        roll = r;
        strcpy(name, n);
    }
    
    // Copy Constructor
    Student(Student &other)  // Reference to another Student
    {
        roll = other.roll;
        strcpy(name, other.name);
        cout << "Copy Constructor Called!\n";
    }
    
    void display()
    {
        cout << roll << " " << name << endl;
    }
};

int main()
{
    Student s1(101, "Ajay");
    
    Student s2 = s1;  // Copy constructor called
    // Output: Copy Constructor Called!
    
    s2.display();  // 101 Ajay
    
    return 0;
}
```

---

## 5. Constructor Examples & Patterns

### Pattern 1: Multiple Constructors (Overloading)

```cpp
class Rectangle
{
private:
    float length, width;
    
public:
    // Constructor 1: No parameters
    Rectangle()
    {
        length = 0;
        width = 0;
    }
    
    // Constructor 2: Two parameters
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }
    
    float area() { return length * width; }
};

int main()
{
    Rectangle r1;           // Calls Constructor 1
    Rectangle r2(5, 10);    // Calls Constructor 2
    
    cout << r2.area();  // 50
    return 0;
}
```

### Pattern 2: Constructor with Initialization List

```cpp
class Point
{
private:
    float x, y;
    
public:
    Point(float px, float py) : x(px), y(py)  // Initialization list
    {
        cout << "Point created at (" << x << "," << y << ")\n";
    }
};

int main()
{
    Point p(3.5, 4.5);
    return 0;
}
```

---

## 6. Member Functions

### Defining Member Functions Inside Class

```cpp
class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;  // Defined inline
    }
};
```

### Defining Member Functions Outside Class

```cpp
class Calculator
{
public:
    int add(int a, int b);  // Declaration only
};

// Definition outside
int Calculator::add(int a, int b)
{
    return a + b;
}

int main()
{
    Calculator c;
    cout << c.add(5, 10);  // 15
    return 0;
}
```

### Const Member Functions (Doesn't modify data)

```cpp
class Student
{
private:
    int roll;
    
public:
    int getRoll() const  // const means this function won't modify roll
    {
        return roll;
        // roll = 10;  // ERROR! Can't modify in const function
    }
};
```

---

## 7. `this` Pointer

### What is `this`?
- Points to the current object
- Automatically passed to every member function
- Useful to refer to current object's members

```cpp
class Student
{
private:
    int roll;
    
public:
    void setRoll(int roll)  // Parameter name same as member
    {
        this->roll = roll;  // this-> refers to member variable
                            // roll refers to parameter
    }
    
    int getRoll()
    {
        return this->roll;  // this is optional here
    }
};

int main()
{
    Student s;
    s.setRoll(101);
    cout << s.getRoll();  // 101
    return 0;
}
```

---

## 8. Common Constructor Patterns

### Pattern 1: Validation in Constructor

```cpp
class Age
{
private:
    int age;
    
public:
    Age(int a)
    {
        if(a > 0 && a < 150)
            age = a;
        else
            age = 0;  // Invalid, set to default
    }
};
```

### Pattern 2: String Handling in Constructor

```cpp
class Person
{
private:
    char name[100];
    int age;
    
public:
    Person(char n[], int a)
    {
        strcpy(name, n);
        age = a;
    }
};
```

### Pattern 3: Dynamic Resource Allocation

```cpp
class DataArray
{
private:
    int *arr;
    int size;
    
public:
    DataArray(int s)  // Constructor allocates memory
    {
        size = s;
        arr = new int[size];  // Allocate memory
    }
};
```

---

## 9. Class vs Struct

| Feature | Class | Struct |
|---------|-------|--------|
| Default Access | private | public |
| Size | Larger (methods + data) | Smaller (data only) |
| Purpose | OOP, encapsulation | Simple data grouping |
| Inheritance | Yes | Yes (but less common) |

```cpp
// Class (private by default)
class MyClass
{
    int x;  // private
public:
    int y;  // public
};

// Struct (public by default)
struct MyStruct
{
    int x;  // public
    int y;  // public
};
```

---

## 10. Complete Example: Bank Account Class

```cpp
class BankAccount
{
private:
    int accountNum;
    char holderName[50];
    float balance;
    
public:
    // Constructor
    BankAccount(int accNum, char name[], float initialBalance)
    {
        accountNum = accNum;
        strcpy(holderName, name);
        balance = initialBalance;
    }
    
    // Member functions
    void deposit(float amount)
    {
        if(amount > 0)
        {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
    }
    
    void withdraw(float amount)
    {
        if(amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }
    
    void display()
    {
        cout << "Account: " << accountNum << endl;
        cout << "Holder: " << holderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount acc(1001, "Ajay", 5000);
    acc.display();
    
    acc.deposit(2000);
    acc.withdraw(1000);
    
    acc.display();
    return 0;
}
```

---

## Summary

| Concept | Key Point |
|---------|----------|
| Class | Blueprint for objects |
| Object | Instance of a class |
| Private | Hidden from outside |
| Public | Accessible from outside |
| Constructor | Initializes object |
| Default Constructor | No parameters |
| Parameterized Constructor | With parameters |
| Copy Constructor | Copies another object |
| Member Function | Function inside class |
| this Pointer | Points to current object |

---

## Common Mistakes

❌ Forgetting to declare constructor
❌ Mixing public and private members
❌ Not copying data in copy constructor
❌ Forgetting strcpy() for strings
❌ Using incorrect access specifiers

✅ Always use private for data members
✅ Provide constructors for initialization
✅ Use public for interface functions
✅ Keep related data and functions together
✅ Follow encapsulation principle
