#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink = (k*l)/nl;
    int lime = c*d;
    int salt = p/np;
    cout<<(min(salt,min(lime,drink)))/n<<'
';
    return 0;
}