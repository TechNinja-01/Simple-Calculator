#include <iostream>
using namespace std;

int main() {
    char Systumm;
    double num1, num2, result;

    cout << "Welcome to Simple Calculator Program\n";
    cout << "Enter an operator (+, -, *, /): ";
    cin >> Systumm;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch(Systumm) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result;
            break;
        case '/':
            if(num2 == 0) {
                cout << "Error: Division by zero is not allowed";
            } else {
                result = num1 / num2;
                cout << "Result: " << result;
            }
            break;
        default:
            cout << "Error: Invalid operator entered";
            break;
    }

    return 0;
}
