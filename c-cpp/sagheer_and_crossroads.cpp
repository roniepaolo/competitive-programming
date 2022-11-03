/* https://codeforces.com/contest/812/problem/A */
#include <bits/stdc++.h>
#define REP(i, a, b) for (int i = a; i < b; i++)

using namespace std;

int r[4][4];

int main() {
	REP(i, 0, 4) {
		REP(j, 0, 4)
			cin >> r[i][j];
	}

	bool acc = false;
	REP(i, 0, 4) {
		if (r[i][3] == 1) {
			if ((r[i][0] || r[i][1]) || r[i][2] == 1) {
				acc = true;
				break;
			}
			else {
				if (i == 0) {
					if (r[1][0] || r[2][1] || r[3][2] == 1) {
						acc = true;
						break;
					}
				}
				else if (i == 1) {
					if (r[0][2] || r[2][0] || r[3][1] == 1) {
						acc = true;
						break;
					}
				}
				else if (i == 2) {
					if (r[0][1] || r[1][2] || r[3][0] == 1) {
						acc = true;
						break;
					}
				}
				else {
					if (r[0][0] || r[1][1] || r[2][2] == 1) {
						acc = true;
						break;
					}
				}
			}
		}
	}
	if (acc) cout << "YES" << '\n';
	else cout << "NO" << '\n';

	return 0;
}
