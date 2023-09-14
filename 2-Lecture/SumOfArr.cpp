#include <iostream>
using namespace std;
int sumOfArray(int num[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += num[i];
    }

    return sum;
}
int main()
{
    int num[100];
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout << "Sum of all element of rray is : " << sumOfArray(num, size) << endl;
    return 0;
}