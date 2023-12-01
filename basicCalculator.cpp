#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter any 2 number with space: ";
    cin >> a >> b;

    char op;
    cout << "Enter any operator: ";
    cin >> op;
    

    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;

    default:
        cout << "madarchod dek ke type kr...";
        break;
    }

    return 0;
}
