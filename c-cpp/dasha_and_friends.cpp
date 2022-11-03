/* https://codeforces.com/contest/761/problem/B */
#include <bits/stdc++.h>
#define REP(i, a, b) for (int i = a; i < b; i++)
using namespace std;

int a[55], b[55];

int main() {
	int n, L;
	cin >> n >> L;
	REP(i, 0, n) cin >> a[i];
	REP(i, 0, n) cin >> b[i];

	REP(i, L - 1, 2 * L) {
		int newB[n];
		REP(j, 0, n) newB[j] = (b[j] + i) % L;
		sort(newB, newB + n);
		bool ans = true;
		REP(j, 0, n) {
			if (a[j] != newB[j]) {
				ans = false;
				break;
			}
		}
		if (ans) {
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;

	return 0;
}
