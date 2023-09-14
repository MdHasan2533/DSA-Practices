// GALAT CODE FOR FIBONACCHI SERIES NTH TERM
// AS AT 1ST PLACE ANSWER IS SHOWING 1 ALTHOUGH IT SHOULD SHOW 0.

#include <iostream>
using namespace std;

int nthOfFibonachi(int n)
{
    int i1 = 0, i2 = 1, sum, i;
    sum = i1 + i2;
    for (i = 4; i <= n; i++)
    {
        i1 = i2;
        i2 = sum;
        sum = i1 + i2;
    }
    return sum;
}
int main()
{

    int n;
    cin >> n;
    cout << "The value at " << n << " place is " << nthOfFibonachi(n) << endl;

    return 0;
}