#include <iostream>
#include <vector>
 
int main() {
	long t;
	std::cin >> t;
	while (t--) {
		long n;
		std::cin >> n;
		std::vector<long> v(n);
		for (long p = 0; p < n; p++) {
			std::cin >> v[p];
		}
		v.push_back(1e9 + 7);
 
		long sz = 1, start = 0;
		bool possible = true;
		std::vector<long> w;
		for (long p = 1; p <= n; p++) {
			if (v[p] == v[p - 1]) {
				++sz;
				continue;
			}
			if (sz == 1) {
				possible = false;
				break;
			}
			w.push_back(p);
			for (long u = start; u < p - 1; u++) {
				w.push_back(u + 1);
			}
			start = p;
			sz = 1;
		}
 
		if (possible) {
			for (long p = 0; p < w.size(); p++) {
				std::cout << w[p] << " ";
			}
			std::cout << std::endl;
		} else {
			std::cout << "-1" << std::endl;
		}
	}
 
	return 0;
}