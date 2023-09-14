#include <iostream>
using namespace std;

// class A
// {
// public:
//     void ab()
//     {
//         cout << "Class A" << endl;
//     }
// };

// class B
// {
// public:
//     void abc()
//     {
//         cout << "Class B" << endl;
//     }
// };

//OPERATOR OVERLOADING

class C {
    public:
    int a;
    int b;
    public:
    int add(){
        return a + b;
    }

    void operator+( C &obj){
        int value1 = this -> a;
        int value2 = obj.a;
        cout<<"Ans "<<value2 - value1<<endl;
    }
};

int main()
{

    C obj1, obj2;
    obj1.a = 100;
    obj2.a = 700;

    obj1 + obj2;

    return 0;
}