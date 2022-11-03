/* https://codeforces.com/contest/754/problem/A */
#include <bits/stdc++.h>
#define REP(i, a, b) for (int i = a; i < b; i++)

using namespace std;

int a[2005], s[2005];

int main() {
	int n;
	cin >> n;
	REP(i, 1, n + 1) {
		cin >> a[i];
		s[i] = s[i - 1] + a[i];
	}
	if (s[n] != 0) {
		cout << "YES" << endl;
		cout << 1 << endl;
		cout << 1 << " " << n << endl;
		return 0;
	}
	REP(i, 1, n + 1) {
		if (s[i] - s[0] != 0 && s[n] - s[i] != 0) {
			cout << "YES" << endl;
			cout << 2 << endl;
			cout << 1 << " " << i << endl;
			cout << i + 1 << " " << n << endl;
			return 0;
		}
	}
	cout << "NO" << endl;

	return 0;
}
