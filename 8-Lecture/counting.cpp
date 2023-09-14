#include <iostream>
using namespace std;

int counting(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}

int main()
{
    int a;
    cin >> a;
    counting(a);

    return 0;
}