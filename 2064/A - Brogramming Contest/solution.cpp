#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
  int t;
  cin >> t;
 
  while (t--) {
    int n;
    cin >> n;
    string binaryString;
    cin >> binaryString;
 
    int count = 0;
    bool allZeros = true;
    bool allOnes = true;
 
    for (char c : binaryString) {
      if (c == '1') {
        allZeros = false;
      }
      if (c == '0') {
        allOnes = false;
      }
    }
 
    if (allZeros) {
      cout << "0" << endl;
      continue;
    }
    if (allOnes) {
      cout << "1" << endl;
      continue;
    }
 
    int i = 0;
    while (i < n && binaryString[i] == '0') {
      i++;
    }
 
    for (; i < n; ++i) {
      if (i == 0 || binaryString[i] != binaryString[i - 1]) {
        count++;
      }
    }
 
    cout <<  count << endl;
  }
 
  return 0;
}