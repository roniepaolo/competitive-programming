/* https://codeforces.com/contest/357/problem/B */
#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	
	int dancers[n+1];
	memset(dancers, 0, sizeof(dancers));
	for (int i = 1; i <= m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		if (dancers[a] == 0 && dancers[b] == 0 && dancers[c] == 0) {
			dancers[a] = 1;
			dancers[b] = 2;
			dancers[c] = 3;
		}
		else if (dancers[a] != 0) {
			if (dancers[a] == 1) {
				dancers[b] = 2;
				dancers[c] = 3;
			}
			else if (dancers[a] == 2) {
				dancers[b] = 1;
				dancers[c] = 3;
			}
			else {
				dancers[b] = 1;
				dancers[c] = 2;
			}
		}
		else if (dancers[b] != 0) {
			if (dancers[b] == 1) {
				dancers[a] = 2;
				dancers[c] = 3;
			}
			else if (dancers[b] == 2) {
				dancers[a] = 1;
				dancers[c] = 3;
			}
			else {
				dancers[a] = 1;
				dancers[c] = 2;
			}
		}
		else {
			if (dancers[c] == 1) {
				dancers[a] = 2;
				dancers[b] = 3;
			}
			else if (dancers[c] == 2) {
				dancers[a] = 1;
				dancers[b] = 3;
			}
			else {
				dancers[a] = 1;
				dancers[b] = 2;
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		cout << dancers[i] << " ";
	}
	cout << endl;
	return 0;
}
