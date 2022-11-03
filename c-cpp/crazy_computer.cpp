/* https://codeforces.com/contest/716/problem/A */
#include <iostream>
#define REP(i, a, b) for (int i = a; i < b; i++)
using namespace std;

int t[1000000];

int main() {
	int n, c;
	cin >> n >> c;
	REP(i, 0, n) cin >> t[i];
	
	if (n == 1) {
		cout << 1 << endl;
		return 0;
	}
	
	int ans = 1;
	REP(i, 1, n) {
		if (t[i] - t[i - 1] <= c) ans++;
		else ans = 1;
	}
	cout << ans << endl;
	
	return 0;
}
