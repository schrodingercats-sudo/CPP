## 📘 `cpp-large-small-array`  
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
- Input/Output (cin/cout)

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

### 🤝 Contributing

Pull requests are welcome!  
If you're learning C++ too, feel free to fork and experiment!

---

### 📄 License

This project is open source and free to use for educational purposes.
