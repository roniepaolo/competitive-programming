/* https://codeforces.com/contest/791/problem/A */
#include <bits/stdc++.h>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int ans = trunc(log((double)b/a) / log(3.0/2) + 1);
	cout <<  ans << "\n";
	return 0;
}
