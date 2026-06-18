#include<bits/stdc++.h>
using namespace std;
 
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--) {
		int a,b,c;
		cin>>a>>b>>c;
 
		vector<int> v{a,b,c};
		bool ok(false);
		sort(v.begin(),v.end());
 
		do {
			if(v[0]+v[1]==v[2]) ok=true;
		} while(next_permutation(v.begin(),v.end()));
 
		cout << (ok ? "YES
" : "NO
");
	}
	return 0;
}