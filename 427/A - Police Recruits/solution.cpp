#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n; cin>>n;
    int t(0),a,b(0);
    for(int i=0;i<n;i++){
        cin>>a;
        if(a<0 and b==0){
            t+=a;
        } else {
            b+=a;
        }
    }
    cout<<abs(t)<<'
';
    return 0;
}