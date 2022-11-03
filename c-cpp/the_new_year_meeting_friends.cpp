/* https://codeforces.com/contest/723/problem/A */
#include <iostream>
using namespace std;

int main() {
	int array[3], aux, a, b, c;
	cin >> a >> b >> c;
	array[0] = a; array[1] = b; array[2] = c;
	while (!(array[0] < array[1] && array[1] < array[2])) {
		if (array[1] < array[0]) {
			aux = array[0];
			array[0] = array[1];
			array[1] = aux;
		}
		if (array[2] < array[1]) {
			aux = array[1];
			array[1] = array[2];
			array[2] = aux;
		}
		if (array[2] < array[0]) {
			aux = array[0];
			array[0] = array[2];
			array[2] = aux;
		}
	}
	cout << (array[1] - array[0]) + (array[2] - array[1]) << endl;
	return 0;
}
