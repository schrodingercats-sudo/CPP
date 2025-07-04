
```markdown
# 📘 C++ Practice Programs Repository

A beginner-friendly C++ repository to help you learn the basics using short, clean, and well-commented code examples.

---

## 📂 Programs Included

- [`cpp-large-small-array`](#-cpp-large-small-array)
- [`cpp-arithmetic-operations`](#-cpp-arithmetic-operations)
- [`cpp-odd-even-checker`](#-cpp-odd-even-checker)
- [`cpp-prime-number-checker`](#-cpp-prime-number-checker)

---

## 🔢 `cpp-large-small-array`  
Find the **largest and smallest number** in an array using C++.

---

### 🧠 About This Project

This simple C++ program:
- Takes `n` numbers from the user  
- Stores them in an array  
- Finds the **smallest** and **largest** number using basic logic  

Perfect for C++ beginners to understand:
- Arrays  
- Loops  
- If conditions  
- Input/Output (`cin` / `cout`)

---

### 💻 Code Snapshot

```cpp
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int smallest = arr[0];
    int largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) smallest = arr[i];
        if (arr[i] > largest) largest = arr[i];
    }

    cout << "Smallest number: " << smallest << endl;
    cout << "Largest number: " << largest << endl;

    return 0;
}
```

---

### ⚙️ How to Run

1. Copy the code into a `.cpp` file (e.g., `main.cpp`)  
2. Compile using g++:
   ```bash
   g++ main.cpp -o output
   ./output
   ```
3. Enter values when asked, and get the result!

---

### 🛠 Features

✅ Clean and simple logic  
✅ Beginner-friendly  
✅ No external libraries  
✅ Works on any C++ compiler

---

### 🚀 Output Example

```
Enter the number of elements: 5
Enter 5 elements:
12 43 7 99 21
Smallest number: 7
Largest number: 99
```

---

## ➕ `cpp-arithmetic-operations`  
Perform **Addition, Subtraction, Multiplication, and Division** on two numbers using C++.

---

### 🧠 About This Project

This C++ program:
- Takes two integer inputs from the user  
- Performs basic arithmetic operations  
- Displays each result cleanly

---

### 💻 Code Snapshot

```cpp
#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Sum: " << a + b << endl;
    cout << "Difference: " << a - b << endl;
    cout << "Product: " << a * b << endl;

    if (b != 0)
        cout << "Quotient: " << a / b << endl;
    else
        cout << "Division by zero is not allowed." << endl;

    return 0;
}
```

---

### ⚙️ How to Run

1. Copy the code into a `.cpp` file  
2. Compile and run using:
   ```bash
   g++ main.cpp -o output
   ./output
   ```

---

### 🚀 Output Example

```
Enter two numbers: 10 5
Sum: 15
Difference: 5
Product: 50
Quotient: 2
```

---

## 🔍 `cpp-odd-even-checker`  
Check whether a given number is **odd or even** using C++.

---

### 🧠 About This Project

This basic program:
- Takes an integer input  
- Checks whether it’s divisible by 2  
- Prints `Odd` or `Even` accordingly

---

### 💻 Code Snapshot

```cpp
#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;

    return 0;
}
```

---

### ⚙️ How to Run

```bash
g++ main.cpp -o output
./output
```

---

### 🚀 Output Example

```
Enter a number: 13
Odd
```

---

## 🧪 `cpp-prime-number-checker`  
Check if a number is **prime** or **not prime** in C++.

---

### 🧠 About This Project

This program:
- Takes an integer input  
- Uses a loop to check divisibility  
- Outputs whether the number is prime or not  

---

### 💻 Code Snapshot

```cpp
#include<iostream>
using namespace std;

int main() {
    int num, i;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        isPrime = false;
    } else {
        for (i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << num << " is a Prime number." << endl;
    else
        cout << num << " is Not a Prime number." << endl;

    return 0;
}
```

---

### ⚙️ How to Run

```bash
g++ main.cpp -o output
./output
```

---

### 🚀 Output Example

```
Enter a number: 29
29 is a Prime number.
```

---

## 🤝 Contributing

Pull requests are welcome!  
If you're also learning C++, feel free to fork and add your own versions or enhancements. Let's build a better beginner hub!
