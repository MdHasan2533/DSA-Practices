//Hierarchical Inheritance
#include<iostream>
using namespace std;

class A {
    public:
    void funct1(){
        cout<< "Function 1 called " <<endl;
    }
};

class B: public A{
    public:
    void funct2(){
        cout<< "Function 2 Called "<<endl;
    }
};

class C: public A {
    public:
    void func3(){
        cout<< "Function 3 called "<< endl;
    }
};

int main(){
    A obj1;
    obj1.funct1();
    B obj2;
    obj2.funct2();
    obj2.funct1();
    C obj3;
    obj3.func3();
    obj3.funct1();   
    return 0;
}