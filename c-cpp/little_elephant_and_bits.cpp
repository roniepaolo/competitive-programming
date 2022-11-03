/* https://codeforces.com/contest/258/problem/A */
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	bool f = false;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '0') {
			s[i] = 'x';
			f = true;
			break;
		}
	}
	if (f) {
		for (int i = 0; i < s.size(); i++)
			if (s[i] != 'x') cout << s[i];
				cout << endl;
	}
	else {
		for (int i = 0; i < s.size() - 1; i++)
			cout << s[i];
		cout << endl;
	}

	

	return 0;
}
