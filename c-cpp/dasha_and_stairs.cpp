/* https://codeforces.com/contest/761/problem/A */
#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if (a == 0 && b == 0) cout << "NO" << endl;
	else if (a == b) cout << "YES" << endl;
	else if (a == b + 1) cout << "YES" << endl;
	else if (b == a + 1) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
