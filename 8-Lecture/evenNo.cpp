#include <iostream>
using namespace std;

bool isEven(int a)
{
    if (a % 2 == 0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    if (isEven(n))
    {
        cout << n << " is even." << endl;
    }
    else
    {
        cout << n << " is odd." << endl;
    }
    return 0;
}