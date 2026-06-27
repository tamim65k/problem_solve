#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int a;cin>>a;
    while(a--){
    vector<int> v(3);
    int t,c(0); cin>>t;
    for (int& i : v) {
      cin >> i;
      if (i > t) c++;
    }
    cout << c << '
';
    }
    return 0;
}