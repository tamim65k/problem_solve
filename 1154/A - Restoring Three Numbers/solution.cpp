#include<bits/stdc++.h>
using namespace std;
 
int main(){
    vector<int> v(4);
    for(int & i: v) cin>>i;
    sort(v.begin(),v.end());
    cout<<v[3]-v[0]<<' '<<v[3]-v[1]<<' '<<v[3]-v[2]<<'
';
}