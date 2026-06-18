#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,k; cin>>n>>k;
    int at=240-k;
    int ts(0),s(0);
 
    for(int i=1;i<=n;i++){
        ts+=5*i;
        if (ts<=at) s++;
        else break;
    }
 
    cout<<s<<'
';
    return 0;
}