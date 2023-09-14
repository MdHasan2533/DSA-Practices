#include <iostream>
using namespace std;
int main()
{

    int i = 1;
    int sum = 0;

    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    cout << "The Value of n is : " << n << endl;
    cout << "Sum before while loop: " << sum << endl;
    while (i <= n)
    {
        sum = sum + i;
        i = i + 1;
    }
    cout << "Sum after while loop is : " << sum << endl;

    return 0;
}