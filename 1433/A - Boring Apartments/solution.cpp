/*
    ＷＲＩＴＴＥＮ ＢＹ ＴＡＭＩＭ
 
*/
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin >> t;
 
    while (t--) {
        int num; cin >> num;
        int lastDigit = num % 10;
        int length = to_string(num).size();
        int keyPress = 10 * (lastDigit - 1);
        keyPress += length * (length + 1) / 2;
        cout << keyPress << endl;
    }
 
    return 0;
}