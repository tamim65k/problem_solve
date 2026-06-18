#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;cin>>t;
    while(t--){
    int n,k;cin>>n>>k;
    vector<int> v(n);
    for(int &i: v) cin>>i;
 
    int ans(0),cnt(0);
    for(int i=0;i<n;i++){
        if(v[i]==1){
            ans+=(cnt+1)/(k+1);
            cnt = 0;
            continue;
        } else {
            cnt++;
        }
    }
    ans += (cnt+1)/ (k+1);
    cout<<ans<<'
';
    }
    
    return 0;
}