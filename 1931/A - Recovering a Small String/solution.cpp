#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n; cin>>n;
	string mini = "zzz",s;
	for(int i=0;i<26;i++)
	for(int j=0;j<26;j++)
	for(int k=0;k<26;k++)
	if(i+j+k+3==n){
	s+=char(i+'a');
	s+=char(j+'a');
	s+=char(k+'a');
	mini = min(mini, s);}
	cout<<mini<<'
';}
signed main(){
	int n;
	cin>>n;
	while(n--)
	solve();}