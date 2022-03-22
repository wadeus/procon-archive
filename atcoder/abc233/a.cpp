#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if (x > y) {
        cout << 0 << endl;
        return 0;
    }
    int ans = (y - x) / 10;
    if (x + ans * 10 != y) {
        ans++;
    }
    cout << ans << endl;
    return 0;
}