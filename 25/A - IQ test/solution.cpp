#include <iostream>
using namespace std;
 
bool isEven(int number) {
    return number % 2 == 0;
}
 
int main() {
    int n;
    cin >> n;
 
    int evenCount = 0;
    int oddCount = 0;
    int lastEvenIndex = -1;
    int lastOddIndex = -1;
 
    // Read numbers and determine evenness on-the-fly
    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;
 
        if (isEven(number)) {
            evenCount++;
            lastEvenIndex = i + 1; // Store 1-based index
        } else {
            oddCount++;
            lastOddIndex = i + 1; // Store 1-based index
        }
    }
 
    // Determine and output the index of the differing number
    int differentIndex = (evenCount == 1) ? lastEvenIndex : lastOddIndex;
    cout << differentIndex << endl;
 
    return 0;
}