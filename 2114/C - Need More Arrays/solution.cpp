#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin>>n; 
    int last = -1, ans(0);
 
    for(int i=0;i<n; i++){
        int a;cin>>a;
        if(a - last> 1){
            ans++;
            last = a;
        }
    }
    cout<<ans<<'
';
}
 
signed main() {
    int n;cin>>n; 
    while(n--){
        solve();
    }
    return 0;
}