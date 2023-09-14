#include <iostream>
using namespace std;

int main()
{
    int a[10] = {-24};
    int b[10] = {5};
    for (int i = 0; i < 10; i++)
    {
        a[i] = -24;
    }
    for (int i = 0; i < 10; i++)
    {
        b[i] = 5;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << " " << b[i] << "  ";
    }
    cout << endl;
    return 0;
}