#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll x;
	scanf("%lld", &x);
	int count = 0;
	while (x > 0) {
		count += (x & 1);//check last bit is 1
		x >>= 1; //right shift operator
	}
	printf("%d
", count);
	return 0;
}