#include <iostream>
using namespace std;

int getMax(int num[], int n)
{
    int maximum = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        maximum = max(maximum, num[i]);
        // if (num[i] > max)
        // {
        //     max = num[i];
        // }
    }
    return maximum;
}

int getMin(int num[], int n)
{
    int minimum = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        minimum = min(minimum, num[i]);
        // if (num[i] < min)
        // {
        //     min = num[i];
        // }
    }
    return minimum;
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
    cout << "Answers are :-" << endl;
    cout << "Max value : " << getMax(num, size) << endl;
    cout << "Min value : " << getMin(num, size) << endl;
    return 0;
}