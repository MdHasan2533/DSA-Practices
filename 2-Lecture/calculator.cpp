// Small Trial Calculator

#include <iostream>
using namespace std;
int main()
{

    int a;
    cout << "Enter the value of a : ";
    cin >> a;

    int b;
    cout << "Enter the value of b : ";
    cin >> b;

    char operatn;
    cout << "Which operation you want to perform ? ";
    cout << "Enter the operation : ";
    cin >> operatn;

    cout << " Your answer is : ";

    switch (operatn)
    {

    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;

    case '*':
        cout << a * b << endl;
        ;
        break;

    case '/':
        cout << a / b << endl;
        ;
        break;

    case '%':
        cout << a % b;
        break;

    default:
        cout << "Please enter a valid Operation ";
    }
}