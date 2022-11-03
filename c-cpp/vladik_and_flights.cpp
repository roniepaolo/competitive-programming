/* https://codeforces.com/contest/743/problem/A */
#include <bits/stdc++.h>
#define REP(i, a, b) for (int i = a; i < b; i++)

using namespace std;

int main() {
	int n, a, b;
	string s;
	cin >> n >> a >> b >> s;
	if (s[a - 1] == s[b - 1]) cout << 0 << endl;
	else cout << 1 << endl;
	return 0;
}
