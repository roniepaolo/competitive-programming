/* https://codeforces.com/contest/451/problem/B */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define M 100000

int isOrdered(long long array[], int x, int y);
void extractArray(long long array[], int mid, int n);
void isitpossible(long long array[], int n);

int main() {
	int n;
	long long array[M];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> array[i];
	isitpossible(array, n);
	return 0;
}

int isOrdered(long long array[], int x, int y) {
	//Si es solo un elemento, esta ordenado
	if (x == y) return 1;
	//Para ordenarlo pasamos el arreglo a un vector
	vector<long long> v;
	for (int i = x; i <= y; i++)
		v.push_back(array[i]);
	sort(v.begin(), v.end());
	int k = x;
	for (vector<long long>::iterator it = v.begin(); it != v.end(); it++) {
		if (*it != array[k]) return 0;
		k++;
	}
	return 1;
}

void extractArray(long long array[], int mid, int n) {
	int i = mid-1, j = mid+1;
	//cout << "i " << i << " j " << j << endl;
	int predI = i, predJ = j;
	while (array[i] > array[i+1] && n > 3) {
		if (i == mid) break;
		if (i == 0) break;
		if (array[i] > array[i+1] && i != 0) i--;
		else if (array[i] < array[i+1]) i++;
	}

	//cout << "i " << i;
	while (array[j-1] > array[j] && n > 3) {
		if (j == mid) break;
		if (j == n-1) break;
		if (array[j-1] > array[j] && array[j] != 0) j++;
		else if (array[j-1] < array[j]) j--;
	}


	//cout << " j " << j << endl;
	vector<long long> v;
	if (n > 3) {
		if (array[i] < array[i+1]) i++;
		if (array[j] > array[j-1]) j--;
	}
	for (int k = i; k <= j; k++)
		v.push_back(array[k]);

	//cout << "i " << i << " j " << j << endl;
	//****************IMPRIMIMOS**********************
	/*cout << "Lo que hay en el vector" << endl;
	for (vector<long long>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;*/

	//Invertimos el vector
	reverse(v.begin(), v.end());


	//****************IMPRIMIMOS**********************
	/*cout << "El vector invertido" << endl;
	for (vector<long long>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;*/


	//Lo volvemos a meter al array
	int k = i;
	for (vector<long long>::iterator it = v.begin(); it != v.end(); it++) {
		array[k] = *it;
		k++;
	}


	//****************IMPRIMIMOS**********************
	/*cout << "Lo que pasamos al array" << endl;
	for (int m = i; m <= j; m++)
		cout << array[m] << " ";
	cout << endl;*/


	if (isOrdered(array, 0, n-1))
		cout << "yes" << endl << i+1 << " " << j+1 << endl;
	else
		cout << "no" << endl;
	/*}
	else if (j != n-1){
		if (isOrdered(array, i, j+1))
			cout << "yes" << endl << i+1 << " " << j+1 << endl;
		else
			cout << "no" << endl;
	}
	else if (i == 0 && j == n-1) {
		if (isOrdered(array, i, j))
			cout << "yes" << endl << i+1 << " " << j+1 << endl;
		else
			cout << "no" << endl;
	}*/
}

void isitpossible(long long array[], int n) {
	int low = 0, high = n-1, mid;
	if (n == 1) {
		cout << "yes" << endl << 1 << " " << 1 << endl;
		return;
	}
	if (n == 2) {
		if (isOrdered(array, 0, 1))
			cout << "yes" << endl << 1 << " " << 1 << endl;
		else
			cout << "yes" << endl << 1 << " " << 2 << endl;
		return;
	}

	while (high >= low) {
		mid = (high + low) / 2;
		if (array[mid+1] < array[mid] || array[mid-1] > array[mid]){
			extractArray(array, mid, n);
			return;
		}
		else {
			if (!isOrdered(array, mid+1, high))
				low = mid + 1;
			else if (!isOrdered(array, low, mid-1))
				high = mid - 1;
			else {
				cout << "yes" << endl << 1 << " " << 1 << endl;
				return;
			}
		}
	}
}
