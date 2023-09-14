#include <iostream>
using namespace std;

bool targetIsPresent(int arr[3][3], int target, int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (arr[row][col] == target)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{

    int Matrice[3][3];
    cout << "Enter the Values of the matrice : " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> Matrice[row][col];
        }
    }

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << Matrice[row][col] << " ";
        }
        cout << endl;
    }
    int target;
    cout << " Enter target value : " << endl;
    cin >> target;

    if (targetIsPresent(Matrice, target, 3, 3))
    {
        cout << target << " is Found. " << endl;
    }
    else
    {
        cout << target << " is NOT Found. " << endl;
    }

    return 0;
}