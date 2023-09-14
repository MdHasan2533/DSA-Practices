#include <iostream>
using namespace std;

class A
{
public:
    void a()
    {
        cout << "Class A" << endl;
    }
};

class B
{
public:
    void b()
    {
        cout << "Class B" << endl;
    }
};

class C : public A, public B
{
public:
};

int main()
{

    C obj1;
    obj1.a();
    obj1.b();

    return 0;
}