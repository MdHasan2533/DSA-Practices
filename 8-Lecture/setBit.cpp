#include <iostream>
using namespace std;

int noOfSetbits(int n)
{
    int count = 0;
    while (n != 0)
    {
        if (n & 1 == 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int setBit(int a, int b)
{
    int k;
    k = noOfSetbits(a) + noOfSetbits(b);
    return k;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "Total no. of set bits in both the numbers are : " << setBit(a, b) << endl;
    return 0;
}