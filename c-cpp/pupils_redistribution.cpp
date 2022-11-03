/* https://codeforces.com/contest/779/problem/A */
#include <bits/stdc++.h>
#define REP(i, a, b) for (int i = a; i < b; i++)
#define REP_(i, a, b) for (int i = a; i <= b; i++)
using namespace std;

int a[105], b[105];

int main() {
	int n;
	cin >> n;
	REP(i, 0, n) {
		int s;
		cin >> s;
		a[s]++;
	}
	REP(i, 0, n) {
		int s;
		cin >> s;
		b[s]++;
	}

	REP_(i, 1, 5) {
		if ((a[i] + b[i]) % 2 == 1) {
			cout << -1 << "\n";
			return 0;
		}
	}

	int ans = 0;
	REP_(i, 1, 5) ans += abs((a[i] + b[i]) / 2 - a[i]);

	cout << ans / 2 << "\n";
	return 0;
}
