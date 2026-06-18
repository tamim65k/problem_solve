#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int k(0),r(0);
    cin>>k>>r;
 
    for(int x=1;x<=10;x++){
        int n=(k*x)%10;
        if(n==0 or n==r){
            cout<<x<<'
';
            break;
        }
    }
 
    return 0;
}