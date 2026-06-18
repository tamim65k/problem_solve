#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
      int n,x,y; cin>>n>>x>>y;
      string s; cin>>s;
      int total_abs(0);
      for(char c:s){
        if(c=='4') total_abs+=1;
        else total_abs+=2;
      }
 
      cout<<(abs(x)+abs(y)<=total_abs and max(abs(x),abs(y))<=s.size()? "YES
":"NO
");
    }
 
    return 0;
}