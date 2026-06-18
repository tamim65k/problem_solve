#include <bits/stdc++.h>
using namespace std;
 
int sumOfDigits(const string & num) {
	int sum = 0;
	for (char c : num) {
		sum += c - '0';
	}
	return sum;
}
 
int main() {
 
	string n; cin >> n;
	int count = 0;
 
	while (n.size() > 1) {
		int sum = sumOfDigits(n);
		n = to_string(sum);
		count++;
	}
 
	cout << count << endl;
	return 0;
}
 