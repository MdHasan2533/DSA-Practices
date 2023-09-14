#include <iostream>
using namespace std;

int sumOfArray(int arr[], int a)
{
    int sum = 0;
    for (int i = 0; i < a; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{

    int size;
    cout << "Enter the size of array : " << endl;
    cin >> size;
    int num[100];
    cout << "Enter the elements of array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout << "Sum of all elements in an array is " << sumOfArray(num, size) << endl;

    return 0;
}