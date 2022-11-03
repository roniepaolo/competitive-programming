/* https://codeforces.com/contest/822/problem/A */
#include <bits/stdc++.h>
#define REP(i, a, b) for (int i = a; i <= b; i++)
using namespace std;

long long fact[20];

int main() {
	int a, b;
	cin >> a >> b;
	int x = min(a, b);
	fact[0] = 1;
	fact[1] = 1;
	REP(i, 2, x) fact[i] = i * fact[i - 1];
	cout << fact[x] << endl;
	return 0;
}
