/* https://codeforces.com/contest/538/problem/B */
#include <iostream>
#include <math.h>
#include <vector>
#include <string.h>
#include <limits.h>
using namespace std;

vector<int> arr;

void printCombination(int R[], int n, vector<int> arr);

int main() {
	int n;
	cin >> n;
	if (n == 0) {
		cout << 0 << endl << 0 << endl;
		return 0;
	}

	//Generamos los quasi binary
	int p = 2, i, k;
	bool okay = false;
	arr.push_back(0);
	arr.push_back(1);
	arr.push_back(10);
	arr.push_back(11);
	while (!okay) {
		k = arr.size();
		for (i = 0; i < k; i++) {
			arr.push_back(pow(10, p) + arr[i]);
			if (arr[i+k] >= n) {
				okay = true;
				break;
			}
		}
		p++;
	}
	//Programa
	//coins -> arr[]
	//total -> n
	int T[n+1], R[n+1];
	T[0] = R[0] = 0;
	for (int i = 1; i <= n; i++) {
		T[i] = INT_MAX - 1;
		R[i] = -1;
	}
	for (int j = 0; j < arr.size(); j++) {
		for (int i = 1; i <= n; i++) {
			if (i >= arr[j]) {
				if (T[i - arr[j]] + 1 < T[i]) {
					T[i] = 1 + T[i - arr[j]];
					R[i] = j;
				}
			}
		}
	}

	cout << T[n] << endl;
	printCombination(R, n, arr);
	cout << endl;

	return 0;
}

void printCombination(int R[], int n, vector<int> arr) {
	int start = n;
	while (start != 0) {
		cout << arr[R[start]] << " ";
		start = start - arr[R[start]];
	}
}
