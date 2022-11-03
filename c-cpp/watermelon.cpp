/* https://codeforces.com/contest/4/problem/A */
#include <iostream>
using namespace std;

int main() {
	int n, k = 1;
	cin >> n;
	while (n--) {
		if (n == 1 || n == 0) break;
		if (!(n&1) && !(k&1)) {
			cout << "YES" << endl;
			break;
		}
		k++;
	}
	if (n == 1 || n == 0)
		cout << "NO" << endl;
	return 0;
}
