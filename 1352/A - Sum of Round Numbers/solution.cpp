#include<bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,p(1);
		cin>>n;
		vector<int>v;
		while(n>0) {
			if(n%10!=0) {
				v.push_back(n%10*p);
			}
			n/=10;
			p*=10;
		}
		cout<<v.size()<<'
';
		for(int i:v) cout<<i<<" 
"[i==v.back()];
	}
	return 0;
}