#include <iostream>
using namespace std;

int fibonacci(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 2; i < n; i++)
    {
        int nextnum = a + b;
        a = b;
        b = nextnum;
    }
    return b;
}
int main()
{
    int n;
    cout << "Enter the Number for which you want that perticular term : ";
    cin >> n;
    cout << "The " << n << " Term of Fibonacci series is : " << fibonacci(n) << endl;

    return 0;
}