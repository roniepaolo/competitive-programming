/* https://codeforces.com/contest/1/problem/A */
#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

int main() {
	double n, m, a, i ,j;
	long long count;
	cin >> n >> m >> a;
	/*
	for (i = n; i > 0; i -= a)
		for (j = m; j > 0; j -= a)
			count++;
	*/
	count = (long long)ceil(n/a) * (long long)ceil(m/a);
	cout << count << endl;
	return 0;
}
