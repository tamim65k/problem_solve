#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '
'
 
void solve(){
    ll n; cin >> n;
    if(n < 4 or (n & 1)){
        cout << -1 << endl;
        return;
    }
 
    ll maxi = n / 4;
    ll mini = n / 6;
 
    if(n % 6 != 0){
        mini += 1;
    }
 
    cout << mini << ' ' << maxi << endl;
}
 
int32_t main(){
    FASTER;
    int tc; cin >> tc;
    
    while(tc--){
        solve();
    }
 
    return 0;
}