#include<bits/stdc++.h>
using namespace std;
 
int main(){
  ios::sync_with_stdio(false),cin.tie(nullptr);
  int a,b,c;
  for(cin>>a;a>0;a--){
    b=1;
    cin>>c;
    while(c>0){
      c/=10;b*=10;
    }
    cout<<b+1<<'
';
  }
  return 0;
}