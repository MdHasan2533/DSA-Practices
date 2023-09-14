#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    cout << "The Value of n is : " << n << endl;
    // if (n > 0)
    // {
    //     cout << "n is Positive" << endl;
    // }
    // else if(n<0)
    // {
    //     cout << "n is Negative" << endl;
    // }
    // else
    // {
    //     cout << "n is zero" << endl;
    // }
    int a = 1;
    cout << "following numbers are : ";
    while (a <= n)
    {
        cout << a << " ";
        a = a + 1;
    }

    return 0;
}