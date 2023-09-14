#include <iostream>
using namespace std;

int swapAlternate(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    return 0;
}

int printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr1[6] = {1, 2, 3, 4, 5, 6};
    int arr2[5] = {1, 2, 3, 4, 5};

    swapAlternate(arr1, 6);
    swapAlternate(arr2, 5);

    printArray(arr1, 6);
    printArray(arr2, 5);

    return 0;
}