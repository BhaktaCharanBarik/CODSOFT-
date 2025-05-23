#include <iostream>
using namespace std;

int main()
{
    int a, b, result;
    char op;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> b;

    switch (op)
    {
    case '+':
        result = a + b;
        cout << "Result: " << result << endl;
        break;

    case '-':
        result = a - b;
        cout << "Result: " << result << endl;
        break;

    case '*':
        result = a * b;
        cout << "Result: " << result << endl;
        break;

    case '/':
        if (b != 0)
            result = a / b;
        else
        {
            cout << "Error! Division by zero" << endl;
            return 1;
        }
        cout << "Result: " << result << endl;
        break;

    default:
        cout << "Invalid operator!" << endl;
    }

    return 0;
}
