/***from dust i have come, dust i will be.***/
 
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '
'
 
void solve() {
    ll n,l,r,x;
    cin>>n>>l>>r>>x;
    vector<ll> v(n);
    for(ll i=0;i<n;i++)
        cin>>v[i];
    
    int count=0;
 
    // there are 2^n subset,
    // loop through all of them.
    for(ll mask=1;mask<(1<<n);mask++) {
        vector<ll> subset;
        ll total_difficulty = 0;
 
        for(ll i=0;i<n;i++) {
            if(mask&(1<<i)) {
                subset.push_back(v[i]);
                total_difficulty += v[i];
            }
        }
 
        // the subset must contain at least 2 problems
        if(total_difficulty>=2) {
            int min_difficulty = *min_element(subset.begin(),subset.end());
            int max_difficulty = *max_element(subset.begin(),subset.end());
 
            if(total_difficulty >= l && total_difficulty <= r && (max_difficulty - min_difficulty) >= x ) {
                count++;
            }
        }
    }
 
    cout<<count<<endl;
 
}
 
int32_t main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "a", stderr);
#endif
    FASTER;
 
    solve();
 
    return 0;
}