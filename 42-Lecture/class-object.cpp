#include <iostream>
using namespace std;

// crestion of class
class Hero
{
    // //properties
public:
    int health;
    int experience;
    char name[100];
    int gethealth()
    {
        return health;
    }
    int getExperience()
    {
        return experience;
    }
    char getName()
    {
        return name[100];
    }
    void setHealth(int h)
    {
        health = h;
    }
    void setExperience(int exp)
    {
        experience = exp;
    }
    void setName(char ch[100])
    {
        name[100] = ch[100];
    }
};

int main()
{
    // creation of object
    Hero paul;
    // cin >> paul.setHealth(100) >> paul.setExperience();
    cin >> paul.name;
    paul.setHealth(100), paul.setExperience(164);
    // paul.name='PAUL'
    // paul.setName() = 'PAUL';
    cout << endl;
    cout << "Health is : " << paul.gethealth() << endl;
    cout << "Experience is : " << paul.getExperience() << endl;
    cout << "Name is : " << paul.name;
    cout << endl;
    cout << "Size : " << sizeof(paul) << endl;

    return 0;
}