#include <iostream>
using namespace std;
int main()
{
    int amount;
    cout << "Enter the amount : ";
    cin >> amount;

    int rupay500;
    int rupay200;
    int rupay100;
    int rupay50;
    int rupay20;
    int rupay10;
    int rupay5;
    int rupay2;
    int rupay1;

    switch (1)
    {

    case 1:
        rupay500 = amount / 500;
        amount = amount % 500;
        cout << "Number of 500 Notes are : " << rupay500 << endl;

    case 2:
        rupay200 = amount / 200;
        amount = amount % 200;
        cout << "Number of 200 Notes are : " << rupay200 << endl;

    case 3:
        rupay100 = amount / 100;
        amount = amount % 100;
        cout << "Number of 100 Notes are : " << rupay100 << endl;

    case 4:
        rupay50 = amount / 50;
        amount = amount % 50;
        cout << "Number of 50 Notes are : " << rupay50 << endl;

    case 5:
        rupay20 = amount / 20;
        amount = amount % 20;
        cout << "Number of 20 Notes are : " << rupay20 << endl;

    case 6:
        rupay10 = amount / 10;
        amount = amount % 10;
        cout << "Number of 10 Notes are : " << rupay10 << endl;

    case 7:
        rupay5 = amount / 5;
        amount = amount % 5;
        cout << "Number of 5 Notes are : " << rupay5 << endl;

    case 8:
        rupay2 = amount / 2;
        amount = amount % 2;
        cout << "Number of 2 Notes are : " << rupay2 << endl;

    case 9:
        rupay1 = amount / 1;
        amount = amount % 1;
        cout << "Number of 1 Notes are : " << rupay1 << endl;

    default:
        "Please Enter correct Format";
    }
    return 0;
}