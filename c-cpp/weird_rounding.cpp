/* https://codeforces.com/contest/779/problem/B */
#include <bits/stdc++.h>
using namespace std;

int main() {
	string n;
	int k;
	cin >> n >> k;

	//if (k >= n.size()) {
		//cout << n.size() - 1 << "\n";
		//return 0;
	//}

	int ans = 0, count = 0;
	for (int i = n.size() - 1; i >= 0; i--) {
		if (count == k) break;

		if (n[i] != '0') {
			if (i == 0) {
				cout << n.size() - 1 << "\n";
				return 0;
			}
			ans++;
		}
		else {
			count++;
		}
	}

	cout << ans << "\n";

	return 0;
}
