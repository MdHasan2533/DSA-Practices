#include <bits/stdc++.h>
using namespace std;

int calculate_total_revenue()
{
    vector<int> prices = {}; // Prices for the n games
    int n = prices.size();
    int num_offers = pow(2, n);
    vector<bool> offers_bought(num_offers, false);
    int total_revenue = 0;

    for (int user = 0; user < num_offers; user++)
    {
        vector<int> remaining_offers;
        for (int i = 0; i < num_offers; i++)
        {
            if (!offers_bought[i])
            {
                remaining_offers.push_back(i);
            }
        }
        if (remaining_offers.empty())
        {
            break;
        }
        int offer_chosen = remaining_offers[user % remaining_offers.size()];
        offers_bought[offer_chosen] = true;
        int max_price = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if ((offer_chosen >> i) & 1)
            {
                max_price = max(max_price, prices[i]);
            }
        }
        total_revenue += max_price;
    }

    return total_revenue;
}

int main()
{
    int total_revenue = calculate_total_revenue();
    cout << "Total revenue earned: " << total_revenue << endl;
    return 0;
}