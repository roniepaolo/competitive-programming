/* https://codeforces.com/contest/742/problem/A */
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	if (n == 0) {
		cout << 1 << endl;
		return 0;
	}
	int ans[4] = {8, 4, 2, 6}, r = n % 4;
	if (r != 0) cout << ans[r - 1] << endl;
	else cout << ans[3] << endl;

	return 0;
}
