/* https://codeforces.com/contest/749/problem/A */
#include <bits/stdc++.h>
#define REP(i, a, b) for (int i = a; i < b; i++)

using namespace std;

int main() {
	int n, k, mask = 1;
	cin >> n;
	k = n / 2;
	cout << k << endl;
	if (n & mask) {
		REP(i, 0, k - 1) cout << 2 << " ";
		cout << 3;
	}
	else REP(i, 0, k) cout << 2 << " ";
	cout << endl;

	return 0;
}
