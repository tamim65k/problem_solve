#include <bits/stdc++.h>
#define endl '
'
#define TAMIM_BABA cin.tie(nullptr) -> sync_with_stdio(false)
#define ll long long int
using namespace std;
 
signed main() {
    TAMIM_BABA;
 
    int testCases;
    cin >> testCases;
 
    for (int currentCase = 1; currentCase <= testCases; ++currentCase) {
        ll numArrays;
        cin >> numArrays;
 
        vector<ll> firstElements, secondElements;
 
        for (ll i = 0; i < numArrays; ++i) {
            ll arraySize;
            cin >> arraySize;
            vector<ll> arrayElements(arraySize);
 
            for (ll &element : arrayElements) {
                cin >> element;
            }
 
            sort(arrayElements.begin(), arrayElements.end());
            if (arrayElements.size() > 1) {
                firstElements.push_back(arrayElements[0]);
                secondElements.push_back(arrayElements[1]);
            } else {
                firstElements.push_back(arrayElements[0]);
            }
        }
 
        sort(firstElements.begin(), firstElements.end());
        sort(secondElements.begin(), secondElements.end());
 
        ll result = 0;
 
        for (ll i = 1; i < secondElements.size(); ++i) {
            result += secondElements[i];
        }
 
        firstElements.push_back(secondElements[0]);
        sort(firstElements.begin(), firstElements.end());
        result += firstElements[0];
 
        cout << result << endl;
    }
 
    return 0;
}