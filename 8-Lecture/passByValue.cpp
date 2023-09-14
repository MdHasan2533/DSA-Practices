#include <iostream>
using namespace std;
int dummy(int n)
{
    n++;
    cout << "n is " << n << endl;
}
int main()
{
    int n;
    cin >> n;
    cout << "N is : " << n << endl;
    dummy(n);
    return 0;
}