/* https://codeforces.com/contest/810/problem/A */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	
	int marks[n], s = 0;
	for (int i = 0; i < n; i++) {
		cin >> marks[i];
		s += marks[i];
	}

	int m = 0;
	while (round(s * 1.0 / (n + m)) < k) {
		s += k;
		m++;
	}
	cout << m << endl;

	return 0;
}
