// problem name: A. Team
// problem url: https://codeforces.com/problemset/problem/231/A
// solved: true

#include <iostream>
using namespace std;

int main() {
    int n, temp, ans = 0;
    cin >> n;
    for(int i = 0;i < n;i++) {
        char sum = 0;
        cin >> temp;
        sum += temp;
        cin >> temp;
        sum += temp;
        cin >> temp;
        sum += temp;
        if(sum >= 2) {
            ans ++;
        }
    }
    cout << ans << endl;
    return 0;
}