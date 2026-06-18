#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n;
        long long X;
        cin >> n >> X;
 
        vector<long long> prices(n);
        for (int i = 0; i < n; i++)
        {
            cin >> prices[i];
        }
 
        vector<long long> sorted_prices = prices;
        sort(sorted_prices.begin(), sorted_prices.end());
 
        long long total = 0;
        for (auto p : prices)
        {
            total += p;
        }
 
        long long max_loyalty = total / X;
 
        vector<long long> result;
        long long current_sum = 0;
        long long bonus_points = 0;
        int left = 0;
        int right = n - 1;
 
        for (long long level = 0; level < max_loyalty; level++)
        {
            long long target = (level + 1) * X;
 
            while (current_sum < target && left <= right)
            {
                if (current_sum + sorted_prices[right] >= target)
                {
                    result.push_back(sorted_prices[right]);
                    current_sum += sorted_prices[right];
                    bonus_points += sorted_prices[right];
                    right--;
                    break;
                }
                else
                {
                    result.push_back(sorted_prices[left]);
                    current_sum += sorted_prices[left];
                    left++;
                }
            }
        }
 
        while (left <= right)
        {
            result.push_back(sorted_prices[left]);
            left++;
        }
 
        cout << bonus_points << "
";
        for (int i = 0; i < n; i++)
        {
            cout << result[i];
            if (i < n - 1)
                cout << " ";
        }
        cout << "
";
    }
 
    return 0;
}