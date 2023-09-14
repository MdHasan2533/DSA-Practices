#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Call
{
    int start_time;
    int end_time;
    int value;
};

bool cmp(Call a, Call b)
{
    return a.end_time < b.end_time;
}

int maximize_call_values(vector<Call> &calls)
{
    sort(calls.begin(), calls.end(), cmp); // sort calls by end time
    int n = calls.size();
    vector<int> dp(n); // dp[i] stores the maximum value up to call i
    dp[0] = calls[0].value;
    for (int i = 1; i < n; i++)
    {
        dp[i] = calls[i].value; // initialize dp[i] to the value of call i
        for (int j = 0; j < i; j++)
        {
            if (calls[j].end_time <= calls[i].start_time)
            {
                dp[i] = max(dp[i], dp[j] + calls[i].value);
            }
        }
    }
    return dp[n - 1];
}

int main()
{
    vector<Call> calls = {};
    int max_value = maximize_call_values(calls);
    cout << "The maximum value of calls that David can take is: " << max_value << endl;
    return 0;
}