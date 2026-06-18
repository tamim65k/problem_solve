#include <bits/stdc++.h>
#define endl '
'
#define FASTER cin.tie(nullptr) -> sync_with_stdio(false)
#define ll long long int
#define all(arr) arr.begin(), arr.end()
using namespace std;
 
signed main() {
    FASTER;
    int room(0), count(0), key(0);
    cin >> room;
    key = (room * 2) - 2;
    string s; cin >> s;
 
    unordered_map<char, int> keys;
 
    for (int i = 0; i < key; i += 2)
    {
        keys[s[i]]++;
        char door = s[i + 1];
        if (keys[tolower(door)] > 0)
        {
            keys[tolower(door)]--;
        } else {
            count++;
        }
    }
 
    cout << count << endl;
    return 0;
}