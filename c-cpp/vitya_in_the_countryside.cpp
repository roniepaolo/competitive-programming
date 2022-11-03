/* https://codeforces.com/contest/719/problem/A */
#include <iostream>
using namespace std;
#define M 92

int main() {
	int n, array[M], i = 0;
	cin >> n;
	while (n--) {
		cin >> array[i];
		i++;
	}
	if (array[i-1] == 15)
		cout << "DOWN" << endl;
	else
		if (array[i-1] == 0)
			cout << "UP" << endl;
		else
			if (i != 1) {
				if (array[i-1] - array[i-2] > 0)
					cout << "UP" << endl;
				else
					if (array[i-1] - array[i-2] < 0)
						cout << "DOWN" << endl;
			}
			else 
				cout << -1 << endl;
	return 0;
}
