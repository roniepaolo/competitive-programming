/* https://codeforces.com/contest/545/problem/C */
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int x[n+5], h[n+5];
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> h[i];
	}

	int count = (n == 1) ? 1 : 2;
	for (int i = 1; i < n - 1; i++) {
		if (x[i] - h[i] > x[i-1]) {
			count++;
		}
		else if (x[i] + h[i] < x[i+1]) {
			count++;
			x[i] += h[i];
		}
	}

	cout << count << endl;
	return 0;
}
