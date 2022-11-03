/* https://codeforces.com/contest/796/problem/B */
#include <bits/stdc++.h>
using namespace std;

bool arr[1000005];

int main() {
	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);

	for (int i = 0; i < m; i++) {
		int h;
		scanf("%d", &h);
		arr[h] = true;
	}

	int pos = 1;
	for (int i = 0; i < k; i++) {
		int u, v;
		scanf("%d %d", &u, &v);
		if (arr[pos] == true)
			break;
		
		if (u == pos)
			pos = v;
		else if (v == pos)
			pos = u;
	}

	printf("%d\n", pos);

	return 0;
}
