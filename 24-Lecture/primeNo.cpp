#include <iostream>
using namespace std;
// Time complexity --> O(n)
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter any number : ";
    cin >> n;
    if (isPrime(n))
    {
        cout << n << " is a Prime number." << endl;
    }
    else
    {
        cout << n << " is NOT a Prime number." << endl;
    }

    return 0;
}