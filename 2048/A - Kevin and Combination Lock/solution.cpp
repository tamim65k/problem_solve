#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while (t--) {
		string n;
		cin >> n;
 
		while (n.find("33") != string::npos) {
			string toRemove = "33";
			size_t pos;
			while ((pos = n.find(toRemove)) != string::npos) {
				n.erase(pos, toRemove.length());
			}
		}
 
		int num;
		if (n.empty()) {
			num = 0;
		} else {
			num = stoi(n);
		}
 
		if (num % 33 == 0) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
 
	return 0;
}