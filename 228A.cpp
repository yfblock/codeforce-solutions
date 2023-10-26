// problem name: A. Is your horseshoe on the other hoof?
// problem url: https://codeforces.com/problemset/problem/228/A
// solved: true

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, ans = 0;
    cin >> a >> b >> c >> d;
    if(b == a) {
        ans ++;
    }
    if(c == b || c == a) {
        ans ++;
    }
    if(d == c || d == b || d == a) {
        ans ++;
    }
    cout << ans << endl;
    return 0;
}