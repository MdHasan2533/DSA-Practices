#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int N;
    cin >> N;

    int maxGCD = 1; // Initialize maximum GCD to 1
    int maxLCM = 2; // Initialize maximum LCM to 2 (LCM of 1 and 2)

    for (int i = 1; i <= N; ++i)
    {
        for (int j = i + 1; j <= N; ++j)
        {
            int gcdValue = gcd(i, j);
            int lcmValue = (i * j) / gcdValue; // Calculate LCM using GCD
            maxGCD = max(maxGCD, gcdValue);
            maxLCM = max(maxLCM, lcmValue);
        }
    }

    int difference = maxLCM - maxGCD;
    cout<<difference;

    return 0;
}