// NAME: Vikas J  
// PRN: 24070123166  
// Exp-1  

#include <iostream>  
using namespace std;  

int main() {
    int num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    if (op == '+')
        cout << "Result = " << num1 + num2;
    else if (op == '-')
        cout << "Result = " << num1 - num2;
    else if (op == '*')
        cout << "Result = " << num1 * num2;
    else if (op == '/') {
        if (num2 != 0)
            cout << "Result = " << num1 / num2;
        else
            cout << "Error: Cannot divide by zero.";
    } else
        cout << "Invalid operator.";

    return 0;
}

