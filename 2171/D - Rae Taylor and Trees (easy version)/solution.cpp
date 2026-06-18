#include <iostream>
#include <vector>
#include <stack>
#include <set>
using namespace std;
 
class DSU
{
    vector<int> parent;
 
public:
    DSU(int n) : parent(n + 1)
    {
        for (int i = 0; i <= n; i++)
            parent[i] = i;
    }
 
    int find(int x)
    {
        if (parent[x] != x)
            parent[x] = find(parent[x]);
        return parent[x];
    }
 
    void unite(int x, int y)
    {
        parent[find(x)] = find(y);
    }
};
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }
 
        DSU dsu(n);
 
        vector<int> nextLarger(n, -1);
        stack<int> st;
        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() && p[st.top()] <= p[i])
            {
                st.pop();
            }
            if (!st.empty())
            {
                nextLarger[i] = st.top();
            }
            st.push(i);
        }
 
        set<int> seen;
        seen.insert(p[0]);
 
        for (int i = 1; i < n; i++)
        {
            auto it = seen.lower_bound(p[i]);
            if (it != seen.begin())
            {
                --it;
                dsu.unite(p[i], *it);
            }
 
            if (nextLarger[i] != -1 && p[i] < p[nextLarger[i]])
            {
                dsu.unite(p[i], p[nextLarger[i]]);
            }
 
            seen.insert(p[i]);
        }
 
        bool valid = true;
        int root = dsu.find(1);
        for (int i = 2; i <= n; i++)
        {
            if (dsu.find(i) != root)
            {
                valid = false;
                break;
            }
        }
 
        cout << (valid ? "Yes" : "No") << endl;
    }
    return 0;
}