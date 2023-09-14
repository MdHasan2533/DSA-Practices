#include<iostream>
using namespace std;

class Student{

    public:
    int height;
    int age;
    int weight;

    public:
    int getAge(){
        return this-> age;
    }
    void setWeight( int w){
        this-> weight = w;
    }

};

class Male: public Student{
    public:
    string color;

    void sleep(){
        cout<<"Is sleeping"<<endl;
    }
};

int main(){
    Male Object1;
    cin>>Object1.color>>Object1.height>>Object1.age>>Object1.weight;
    cout<<"Color: "<<Object1.color<<endl;
    cout<<"Height "<<Object1.height<<"cm"<<endl;
    cout<<"Age: "<<Object1.age<<" yrs"<<endl;
    cout<<"Weight: "<<Object1.weight<<" kg"<<endl;
    Object1.sleep();

    return 0;
}