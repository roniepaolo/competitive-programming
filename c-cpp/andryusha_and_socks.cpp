/* https://codeforces.com/contest/782/problem/A */
//#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
using namespace std;

int arr[100005];

int main() {
	int n, sz = 0, ans = -1;
	cin >> n;
	n *= 2;
	memset(arr, 0, sizeof(arr));
	while (n--) {
		int k;
		cin >> k;
		arr[k]++;
		if (arr[k] > 1)
			sz--;
		else if (arr[k] == 1)
			sz++;

		if (sz > ans) ans = sz;
	}
	cout << ans << "\n";
	return 0;
}
