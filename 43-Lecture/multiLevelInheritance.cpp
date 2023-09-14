#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"Speaking Successful"<<endl;
    };
};

class Dog: public Animal{

};

class GS: public Dog{

};

int main () {

    GS g1;
    g1.speak();

    return 0;
}