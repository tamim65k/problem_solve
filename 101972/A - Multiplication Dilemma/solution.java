#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        int low = 9;
        while(n>0){
            int d = n%10;    
            low = min(low, d);
            n/=10;
        }
        cout<<low<<'
';
    }
    return 0;
}