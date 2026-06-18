#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--){
    int n; string s; cin>>n>>s;
 
    vector<int> cnt(26,0);
    for(char c: s) cnt[c-'a']++;// we will get char index
 
    int flag(0);
    for(int i=0;i<26; i++){
        if(cnt[i]>=3) flag=1;
        else if(cnt[i]>=2 and (s[0]-'a' != i or s.back()-'a' != i))
            flag = 1;
    }
 
    cout<<(flag?"Yes":"No")<<'
';
    }
    
    return 0;
}