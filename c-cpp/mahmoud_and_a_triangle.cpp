/* https://codeforces.com/contest/766/problem/B */
#include <bits/stdc++.h>
#define REP(i, a, b) for (int i = a; i < b; i++)

using namespace std;

int a[100005];

int main() {
	int n;
	cin >> n;
	REP(i, 0, n) cin >> a[i];
	sort(a, a + n);
	REP(i, 0, n - 2) {
		if (a[i + 2] < a[i + 1] + a[i]) {
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}
