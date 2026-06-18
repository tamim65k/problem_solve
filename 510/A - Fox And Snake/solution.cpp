#include<bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int a,b;
	cin>>a>>b;
	for(int i=1; i<=a; i++)
		if(i%2==1) cout<<string(b,'#')<<'
';
		else if (i % 4 == 2) cout<<string(b-1,'.')<<"#
";
		else cout<<'#'<<string(b-1,'.')<<'
';
	return 0;
}