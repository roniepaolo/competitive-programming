/* https://codeforces.com/contest/811/problem/B */
#include <bits/stdc++.h>
#define REP(i, a, b) for (int i = a; i < b; i++)
#define PB push_back

using namespace std;

vector<int> v;

int main() {
	int n, m;
	cin >> n >> m;
	REP(i, 0, n) {
		int d;
		cin >> d;
		v.PB(d);
	}
	REP(i, 0, m) {
		vector<int> vAux;
		int l, r, x;
		cin >> l >> r >> x;
		int check = 0;
		REP(i, l - 1, r) if (v[i] < v[x - 1]) check++;
		if (check == x - l) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	
	return 0;
}
