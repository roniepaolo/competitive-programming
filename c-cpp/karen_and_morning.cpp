/* https://codeforces.com/contest/816/problem/A */
#include <bits/stdc++.h>

using namespace std;

int main() {
	int hh, mm;
	scanf("%2d", &hh); getchar();
	scanf("%2d", &mm);

	int ans = 0;
	while ((hh / 10 != mm % 10) || (hh % 10 != mm / 10)) {
		mm = (mm + 1) % 60;
		if (mm == 0) hh = (hh + 1) % 24;
		ans++;
	}

	cout << ans << endl;

	return 0;
}
