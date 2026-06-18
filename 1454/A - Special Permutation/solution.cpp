#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a;
	cin>>n;
	while(n--){
		cin>>a;
        cout<<a<<' ';
		for(int i=1;i<a;i++)
		cout<<i<<((i==a-1)?'
':' ');
	}
	return 0;
}