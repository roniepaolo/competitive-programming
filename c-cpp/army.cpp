/* https://codeforces.com/contest/38/problem/A */
#include <iostream>
using namespace std;

int main() {
	int n, array[105], k = 0;
	cin >> n;
	for (int i = n; i > 1; i--) {
		k++;
		cin >> array[k];
	}
	int a, b, sum = 0;
	cin >> a >> b;
	for (int i = a; i < b; i++) {
		sum += array[i];
	}
	cout << sum << endl;
	return 0;
}
