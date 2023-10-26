// problem name: A. Boy or Girl
// problem url: https://codeforces.com/problemset/problem/236/A
// solved: true

#include <iostream>
#include <memory.h>

using namespace std;

int main() {
    int ans = 0;
    bool arrs[26];
    string newline;
    memset(arrs, 0, 26);
    cin >> newline;
    for(char c:newline) {
        arrs[c - 'a'] = true;
    }
    for(int i = 0;i < 26;i++) {
        ans += arrs[i] ? 1 : 0;
    }
    cout << (ans % 2 == 0?"CHAT WITH HER!":"IGNORE HIM!") << endl;
    return 0;
}