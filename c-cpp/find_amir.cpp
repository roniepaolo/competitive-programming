/* https://codeforces.com/contest/805/problem/C */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	int ans = 0;
	for (int i = 3; i <= n; i++)
		if (i & 1) ans++;

	cout << ans << endl;

	return 0;
}
