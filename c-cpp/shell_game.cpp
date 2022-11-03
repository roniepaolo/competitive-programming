/* https://codeforces.com/contest/777/problem/A */
#include <bits/stdc++.h>
using namespace std;

string matrix[6] = {"012", "102", "120", "210", "201", "021"};

int main() {
	int n, x;
	cin >> n >> x;

	cout << matrix[n%6][x] << "\n";

	return 0;
}
