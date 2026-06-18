#include<bits/stdc++.h>
using namespace std;
 
int main(){
  ios::sync_with_stdio(false), cin.tie(nullptr);
 
  string guest, host, pile;
  cin>>guest>>host>>pile;
  string combined = guest+host;
 
  if(combined.length()!=pile.length()){
    cout<<"NO
";
    return 0;
  }
 
  int freq[26] = {0};
  for(char c: combined)
    freq[c-'A']++;
  for(char c: pile)
    freq[c-'A']--;
 
  for(int i=0;i<26;i++){
    if(freq[i]!=0){
      cout<<"NO
";
      return 0;
    }
  }
 
  cout<<"YES
";
  return 0;
}