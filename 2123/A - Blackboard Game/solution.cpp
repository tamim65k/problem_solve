#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n; cin>>n;
    cout<<(n%4? "Alice":"Bob")<<'
';
}
 
int main(){
    int t; cin>>t;
    for(;t--;)
        solve();
}