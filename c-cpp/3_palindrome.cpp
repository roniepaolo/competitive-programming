/* https://codeforces.com/contest/805/problem/B */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	string ans = "aa";

	if (n == 1)  {
		cout << ans[0] << '\n';
		return 0;
	}
	else if (n == 2) {
		cout << ans << '\n';
		return 0;
	}
	else {
		for (int i = 0; i < n - 2; i++) {
			int sz = ans.size();
			if (ans[sz - 2] == 'a') ans += 'b';
			else ans += 'a';
		}
	}

	cout << ans << '\n';

	return 0;
}
