#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int n;
        cin >> n;
        
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        
        int cur_a_xor = 0, cur_b_xor = 0;
        for (int i = 0; i < n; i++)
        {
            cur_a_xor ^= a[i];
            cur_b_xor ^= b[i];
        }
        
        for (int i = 0; i < n; i++)
        {
            int turn = i + 1;
            
            int no_swap_diff = (turn % 2 == 1) ? (cur_a_xor - cur_b_xor) : (cur_b_xor - cur_a_xor);
            
            int new_a_xor = cur_a_xor ^ a[i] ^ b[i];
            int new_b_xor = cur_b_xor ^ b[i] ^ a[i];
            
            int swap_diff = (turn % 2 == 1) ? (new_a_xor - new_b_xor) : (new_b_xor - new_a_xor);
            
            if (swap_diff > no_swap_diff)
            {
                swap(a[i], b[i]);
                cur_a_xor = new_a_xor;
                cur_b_xor = new_b_xor;
            }
        }
        
        int ajisai_score = cur_a_xor;
        int mai_score = cur_b_xor;
        
        if (ajisai_score > mai_score)
        {
            cout << "Ajisai" << endl;
        }
        else if (mai_score > ajisai_score)
        {
            cout << "Mai" << endl;
        }
        else
        {
            cout << "Tie" << endl;
        }
    }
    
    return 0;
}