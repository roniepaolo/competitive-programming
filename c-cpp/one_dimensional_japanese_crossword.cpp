/* https://codeforces.com/contest/721/problem/A */
#include <iostream>
#include <string.h>
using namespace std;
#define M 100

char array[M][M];

int main() {
	int n, i = 0, j = 0;
	char c;
	cin >> n;
	while (n--) {
		cin >> c;
		if (c == 'W') {
			i++;
			j = 0;
		}
		else {
			array[i][j] = c;
			j++;
		}
	}
	int k, l, count = 0;
	for (k = 0; k <= i; k++)
		if ((int)strlen(array[k]) > 0)
			count++;
	cout << count << endl;
	if (count != 0) {
		for (k = 0; k <= i; k++)
			if ((int)strlen(array[k]) > 0)
				cout << (int)strlen(array[k]) << " ";
		cout << endl;
	}
	return 0;
}
