#include <bits/stdc++.h>
using namespace std;
 
int countFaces(int n, int m, vector<string>& image) {
    int faceCount = 0;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < m - 1; ++j) {
            vector<char> square = {
                image[i][j], image[i][j + 1],
                image[i + 1][j], image[i + 1][j + 1]
            };
            sort(square.begin(), square.end());
            if (square == vector<char>{'a', 'c', 'e', 'f'}) {
                ++faceCount;
            }
        }
    }
    return faceCount;
}
 
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, m;
    cin >> n >> m;
    vector<string> image(n);
    for (int i = 0; i < n; ++i) {
        cin >> image[i];
    }
 
    cout << countFaces(n, m, image) << endl;
    return 0;
}