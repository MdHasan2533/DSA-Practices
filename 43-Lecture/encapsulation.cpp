#include <iostream>
using namespace std;

class student
{
private:
    string name;
    int age;
    int height;
    string gender;

public:
    int getAge()
    {
        return this->age;
    }
};

int main()
{

    student Hasan;
    cout << "All Good" << endl;
    return 0;
}