/* https://codeforces.com/contest/50/problem/A */
#include <iostream>
using namespace std;

int main() {
	int m, n, p1;
	cin >> m >> n;
	if (m >= 2 && n >= 2)
		if (m % 2 == 0 && n % 2 == 0)
			/*if (m > n)*/
				cout << m * (n >> 1) << endl;
			/*else
				cout << n * (m >> 1) << endl;*/
		else
			if (m % 2 == 0 && n % 2 != 0)
				cout << n * (m >> 1) << endl;
			else
				if (m % 2 != 0 && n % 2 == 0)
					cout << m * (n >> 1) << endl;
				else
					if (m % 2 != 0 && n % 2 != 0)
							cout << m * ((n - 1) >> 1) + ((m -1) >> 1) << endl;
	if (m < 2 && n >= 2)
		if (n % 2 != 0)
			cout << ((n - 1) >> 1) << endl;
		else
			cout << (n >> 1) << endl;
	else
		if (n < 2 && m >= 2)
			if (m % 2 != 0)
				cout << ((m - 1) >> 1) << endl;
			else
				cout << (m >> 1) << endl;
		else
			if (n < 2 && m < 2)
				cout << 0 << endl;

	return 0;
}
