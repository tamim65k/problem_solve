#include<bits/stdc++.h>
using namespace std;
 
void solve(){
	string s;
		cin>>s;
		int b = 0;
		for(int i=1;i+1<s.size();i++){
			if(s[i]=='('){
				b++;
			} else {b--;}
			if(b<0){
				cout<<"YES
";
				return;
			}
		}
		
		cout<<(b==0?"NO":"YES")<<'
';
}
 
signed main(){
	int n; cin>>n;
	while(n--){
		solve();
	}
}