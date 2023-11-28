#include <iostream>
using namespace std;
int main()
{
    char button;
    cin >> button;
    cout << "Input a character: ";
    switch (button)
    {
    case 'a':
        cout << "hello";
        break;
    case 'b':
        cout << "hola";
        break;
    case 'c':
        cout << "Namaste";
        break;
    case 'd':
        cout << "Ciao";
        break;
    case 'e':
        cout << "Salut";
        break;

    default:
        cout << "I m still learning more." ;
        break;
    }
    return 0;
}
