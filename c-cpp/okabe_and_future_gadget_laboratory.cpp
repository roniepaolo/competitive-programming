/* https://codeforces.com/contest/821/problem/A */
#include <bits/stdc++.h>
#define REP(i, a, b) for (int i = a; i < b; i++)

using namespace std;

int g[55][55];

int main() {
	int n;
	cin >> n;
	REP(i, 0, n) REP(j, 0, n) cin >> g[i][j];
	REP(i, 0, n) {
		REP(j, 0, n) {
			bool good = false;
			if (g[i][j] != 1) {
				REP(k, 0, n) {
					REP(l, 0, n) {
						if (k != j && l != i) {
							if (g[i][k] + g[l][j] == g[i][j]) {
								good = true;
								break;
							}
						}
					}
				}
				if (!good) {
					cout << "No" << endl;
					return 0;
				}
			}
		}
	}
	cout << "Yes" << endl;

	return 0;
}
