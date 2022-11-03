/* https://codeforces.com/contest/758/problem/B */
#include <bits/stdc++.h>
#define REP(i, a, b, c) for (int i = a; i < b; i += c)

using namespace std;

int r, b, y, g;

int main() {
	string s;
	cin >> s;
	REP(i, 0, 4, 1) {
		int exc = 0, mask = 0;
		REP(j, i, s.size(), 4) {
			if (s[j] == '!') exc++;
			if (s[j] == 'R') mask = 8;
			else if (s[j] == 'B') mask = 4;
			else if (s[j] == 'Y') mask = 2;
			else if (s[j] == 'G') mask = 1;
		}
		if (mask == 8) r = exc;
		else if (mask == 4) b = exc;
		else if (mask == 2) y = exc;
		else g = exc;
	}
	cout << r << " " << b << " " << y << " " << g << endl;

	return 0;
}
