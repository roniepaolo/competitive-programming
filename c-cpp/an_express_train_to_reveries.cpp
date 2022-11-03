/* https://codeforces.com/contest/814/problem/B */
#include <bits/stdc++.h>
#define REP(i, a, b) for (int i = a; i < b; i++)

using namespace std;

int x[1005], aux[1005], ans[1005];

int main() {
	int n;
	cin >> n;
	REP(i, 0, n) cin >> x[i];
	REP(i, 0, n) aux[x[i]]++;
	REP(i, 0, n) if (aux[x[i]] == 1) ans[i] = x[i];

	memset(aux, 0, sizeof(aux));
	REP(i, 0, n) cin >> x[i];
	REP(i, 0, n) aux[x[i]]++;
	REP(i, 0, n) if (aux[x[i]] == 1) ans[i] = x[i];

	memset(aux, 0, sizeof(aux));
	REP(i, 0, n) aux[ans[i]]++;
	int j = 1;
	REP(i, 0, n) {
		if (ans[i] == 0) {
			while (aux[j]) ++j;
			ans[i] = j;
			j++;
		}
	}

	REP(i, 0, n) cout << ans[i] << " ";
	cout << endl;

	return 0;
}
