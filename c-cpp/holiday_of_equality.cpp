/* https://codeforces.com/contest/758/problem/A */
#include <bits/stdc++.h>
#define REP(i, a, b) for (int i = a; i < b; i++)

using namespace std;

int a[105];

int main() {
	int n, h = -1, ans = 0;
	cin >> n;
	REP(i, 0, n) {cin >> a[i]; h = max(a[i], h);}
	REP(i, 0, n) ans += h - a[i];
	cout << ans << endl;
	return 0;
}
