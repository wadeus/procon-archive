#include <bits/stdc++.h>

using namespace std;

int main() {
    int v, a, b, c;
    cin >> v >> a >> b >> c;
    while(true) {
        if (v < a) {
            cout << "F" << endl;
            break;
        }
        v -= a;
        if (v < b) {
            cout << "M" << endl;
            break;
        }
        v -= b;
        if (v < c) {
            cout << "T" << endl;
            break;
        }
        v -= c;
    }
    return 0;
}