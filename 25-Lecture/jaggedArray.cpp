#include <iostream>
using namespace std;
int main()
{

    int row;
    int col;
    cin >> row >> col;
    int c[col];
    for (int i = 0; i < col; i++)
    {
        cin >> c[i];
    }
    int **a = new int *[row];
    for (int i = 0; i < row; i++)
    {
        a[i] = new int[c[i]];
    }
    // taking input array elements
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < c[i]; j++)
        {
            cin >> a[i][j];
        }
    }
    // output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < c[i]; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}