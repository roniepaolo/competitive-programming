/* https://codeforces.com/contest/798/problem/A */
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int mask = 1, check = 0;
	int h = s.size() / 2, k = h - 1;
	if (s.size() & mask) {
		for (int i = h + 1; i < s.size(); i++)
			if (s[i] != s[k--]) check++;
		if (check <= 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	else {
		for (int i = h; i < s.size(); i++)
			if (s[i] != s[k--]) check++;
		if (check == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	
	return 0;
}
