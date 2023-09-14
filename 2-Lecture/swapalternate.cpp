#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int evenArray[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int oddArray[7] = {1, 2, 3, 4, 5, 6, 7};

    swapAlternate(evenArray, 8);
    printArray(evenArray, 8);
    swapAlternate(oddArray, 7);
    printArray(oddArray, 7);
    return 0;
}