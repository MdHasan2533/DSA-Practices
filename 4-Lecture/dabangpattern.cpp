#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        int start = 1;
        while (col <= n - row + 1)
        {
            cout << start << " ";
            start++;
            col++;
        }

        int star = row - 1;
        while (star)
        {
            cout << "* ";
            star--;
        }

        int star2 = row - 1;
        while (star2)
        {
            cout << "* ";
            star2--;
        }

        int start2 = n - row + 1;
        while (start2)
        {
            cout << start2 << " ";
            start2--;
        }

        cout << endl;
        row++;
    }

    return 0;
}