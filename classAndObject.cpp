#include <iostream>

using namespace std;
// creating class
class Hero
{

    int health;
    char name[100];
    float height;
};

int main()
{
    // creating object
    Hero h1;

    cout << "Sizeof :" << sizeof(h1) << endl;

    return 0;
}