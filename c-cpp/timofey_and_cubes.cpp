/* https://codeforces.com/contest/764/problem/B */
#include <bits/stdc++.h>
#define REP(i, a, b) for (int i = a; i < b; i++)

using namespace std;

int a[200005];

int main() {
	int n;
	cin >> n;
	REP(i, 0 ,n) cin >> a[i];
	int i = 0, j = n - 1, k = 0, mask = 1;
	while (i < j) {
		if (!(k & mask)) {
			int aux = a[i];
			a[i] = a[j];
			a[j] = aux;
		}
		i++; j--; k++;
	}
	cout << a[0];
	REP(i, 1, n) cout << " " << a[i];
	cout << endl;
	return 0;
}
