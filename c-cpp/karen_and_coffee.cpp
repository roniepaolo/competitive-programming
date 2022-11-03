/* https://codeforces.com/contest/816/problem/B */
#include <bits/stdc++.h>
#define REP(i, a, b) for (int i = a; i < b; i++)

using namespace std;

long long x[200005], ans[200005];

int main() {
	int n, k, q;
	cin >> n >> k >> q;
	REP(i, 0, n) {
		int l, r;
		cin >> l >> r;
		x[l]++; x[r + 1]--;
	}
	long long acc = 0, cant = 0;
	REP(i, 1, 200002) {
		acc += x[i];
		if (acc >= k) ans[i - 1] = cant++;
		else ans[i - 1] = cant;
	}
	while (q--) {
		int a, b;
		cin >> a >> b;
		cout << ans[b] - ans[a - 1] << endl;
	}
	return 0;
}
