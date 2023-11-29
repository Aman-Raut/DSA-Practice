#include <iostream>

using namespace std;

class human
{
public:
    float height;
    int weight;
    int age;

public:
    int getage()
    {
        return this->age;
    }
    void setweight(int w)
    {
        this->weight = w;
    }
};

class male : public human
{

public:
    string color;

    void sleep()
    {
        cout << "male sleeping" << endl;
    }
};

int main()
{

    male object1;

    object1.weight = 65;
    object1.height = 5.8;
    object1.color = "white";
    object1.age = 21;

    cout << object1.age << endl;
    cout << object1.weight << endl;
    cout << object1.height << endl;

    cout << object1.color << endl;

    return 0;
}