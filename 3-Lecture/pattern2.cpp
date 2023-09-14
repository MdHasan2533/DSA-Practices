#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    cout << "The Value of n is : " << n << endl;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << row << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}