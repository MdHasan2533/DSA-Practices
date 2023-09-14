#include <iostream>
using namespace std;

int setBitOfA(int a)
{
    int count = 0;
    while (a != 0)
    {
        if (a & 1)
        {
            count++;
        }
        a = a >> 1;
    }
    return count;
}

int setBitOfB(int b)
{
    int count = 0;
    while (b != 0)
    {
        if (b & 1)
        {
            count++;
        }
        b = b >> 1;
    }
    return count;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int answer1 = setBitOfA(a);
    int answer2 = setBitOfB(b);
    cout << "Total numbe of Set bits of A and B is : " << answer1 + answer2;
    return 0;
}