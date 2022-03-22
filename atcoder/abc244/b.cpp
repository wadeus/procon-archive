#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	int x = 0, y = 0;
	char d = 'e';
	string t;
	cin >> n >> t;
	for (int i = 0; i < n; i++) {
		if (t[i] == 'S') {
			switch (d) {
				case 'n':
					y++;
					break;
				case 's':
					y--;
					break;
				case 'e':
					x++;
					break;
				case 'w':
					x--;
					break;
				default:
					break;
			}
		} else if (t[i] == 'R') {
			switch (d) {
				case 'n':
					d = 'e';
					break;
				case 's':
					d = 'w';
					break;
				case 'e':
					d = 's';
					break;
				case 'w':
					d = 'n';
					break;
				default:
					break;
			}
		}
	}

	cout << x << " " << y << endl;
	return 0;
}