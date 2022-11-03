/* https://codeforces.com/contest/796/problem/A */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, k, pos = 105;
	cin >> n >> m >> k;
	
	for (int i = 1; i <= n; i++) {
		int h;
		cin >> h;

		if (h != 0) {
			if (h <= k) {
				int dist = abs(m - i);
				if (dist < pos)
					pos = dist;
			}
		}

		if (pos == 1) break;
	}

	cout << pos * 10 << "\n";
	return 0;
}
