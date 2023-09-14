#include <iostream>
using namespace std;

class Human
{
public:
    int age;
    int weight;
    string color;

public:
    void speak()
    {
        cout << "Speaking Successful" << endl;
    };
};

class Animal {
    public:
    int age;
    int weight;

    public:
    void bark(){
        cout<<"Barking Successful"<<endl;
    }
};

//Multiple Inheritance

class HybridOfBoth: public Human, public Animal {

};

int main()
{
    HybridOfBoth HA1;
    HA1.bark();
    HA1.speak();
    return 0;
}