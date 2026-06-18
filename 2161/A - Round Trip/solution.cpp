#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        long long R0, X, D, n;
        cin >> R0 >> X >> D >> n;
 
        string rounds;
        cin >> rounds;
 
        long long current_rating = R0;
        int rated_count = 0;
 
        for (int i = 0; i < n; i++)
        {
            if (rounds[i] == '1')
            {
                rated_count++;
 
                bool has_div2_ahead = false;
                for (int j = i + 1; j < n; j++)
                {
                    if (rounds[j] == '2')
                    {
                        has_div2_ahead = true;
                        break;
                    }
                }
 
                if (has_div2_ahead)
                {
                    long long min_possible = max(0LL, current_rating - D);
                    long long max_possible = current_rating + D;
 
                    if (min_possible < X)
                    {
                        current_rating = min(min_possible, X - 1);
                    }
                    else
                    {
                        current_rating = min_possible;
                    }
                }
                else
                {
                    current_rating = max(0LL, current_rating - D);
                }
            }
            else
            {
                if (current_rating < X)
                {
                    rated_count++;
 
                    bool has_div2_ahead = false;
                    for (int j = i + 1; j < n; j++)
                    {
                        if (rounds[j] == '2')
                        {
                            has_div2_ahead = true;
                            break;
                        }
                    }
 
                    if (has_div2_ahead)
                    {
                        long long min_possible = max(0LL, current_rating - D);
                        long long max_possible = current_rating + D;
 
                        current_rating = min(max_possible, X - 1);
                    }
                }
            }
        }
 
        cout << rated_count << endl;
    }
 
    return 0;
}