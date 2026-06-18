#include<bits/stdc++.h>
using namespace std;
 
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--) {
		int n, k, m(0), kk(0);
		cin >> n >> k;
		vector<int> a(n), cnt(k,0);
 
		for(int i=0; i<n; i++) {
			cin>>a[i];
			if(a[i]==k) m++;
			if(a[i]<k) cnt[a[i]]++;
		}
 
		for(int i=0; i<k; i++) {
			if(!cnt[i]) kk++;
		}
 
		cout<<max(m,kk)<<'
';
	}
 
	return 0;
}