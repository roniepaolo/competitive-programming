/* https://codeforces.com/contest/814/problem/A */
#include <bits/stdc++.h>

using namespace std;

int a[205];

int main() {
	int n, k;
	cin >> n >> k;

	if (k == 1) {
		bool isOrd = true;
		int idx = 1;
		for (int i = 1; i <= n; i++) {
			cin >> a[i]; a[i + 1] = 205;
			if (a[i] != 0) {
				if (a[i] < a[i - 1]) {
					isOrd = false;
					break;
				}
			}
			else idx = i;
		}
		if (isOrd) {
			cin >> a[idx];
			if (a[idx] > a[idx - 1] && a[idx] < a[idx + 1])
				cout << "No" << endl;
			else
				cout << "Yes" << endl;
		}
		else
			cout << "Yes" << endl;
	}
	else
		cout << "Yes" << endl;

	return 0;
}
