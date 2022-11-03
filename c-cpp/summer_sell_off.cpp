/* https://codeforces.com/contest/810/problem/B */
#include <bits/stdc++.h>
using namespace std;

int gain[100005];

int main() {
	int n, f;
	cin >> n >> f;
	long long sum = 0;

	for (int i = 0; i < n; i++) {
		int k, l;
		cin >> k >> l;

		int g_ant = min(k, l);
		sum += g_ant;
		gain[i] = min(2 * k, l) - g_ant;
	}

	sort(gain, gain + n, greater<int>());

	long long m = 0;
	for (int i = 0; i < f; i++)
		m += gain[i];

	cout << sum + m << endl;

	return 0;
}
