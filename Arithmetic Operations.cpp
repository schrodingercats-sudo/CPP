#include <iostream>
using namespace std;

int main() {
    int a, b;
    int sum, sub, mul, div, mod;

    cout << "Enter two values: ";
    cin >> a >> b;

    sum = a + b;
    sub = a - b;
    mul = a * b;

    if (b != 0) {
        div = a / b;
        mod = a % b;
    } else {
        cout << "Cannot divide or mod by zero!" << endl;
        div = mod = 0;
    }

    cout << "Addition: " << sum << endl;
    cout << "Subtraction: " << sub << endl;
    cout << "Multiplication: " << mul << endl;
    cout << "Division: " << div << endl;
    cout << "Modulus: " << mod << endl;
    cout<< "rohit karan"<<endl;
    cout<<"2403466160285"<<endl;

    return 0;
}
