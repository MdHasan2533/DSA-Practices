#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{

    int a;
    cin >> a;
    if (isPrime(a))
    {
        cout << a << " is a Prime Number." << endl;
    }
    else
    {
        cout << a << " is NOT a Prime Number" << endl;
    }
    return 0;
}