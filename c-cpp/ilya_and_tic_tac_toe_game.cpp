/* https://codeforces.com/contest/754/problem/B */
#include <bits/stdc++.h>
#define REP(i, a, b) for (int i = a; i < b; i++)

using namespace std;

bool win(int, int);

string  t[4];

int main() {
	bool isEmpty = true;
	REP(i, 0, 4) {
		REP(j, 0, 4) {
			cin >> t[i][j];
			if (t[i][j] == 'x' || t[i][j] == 'o')
				isEmpty = false;
		}
	}
	if (isEmpty) {
		cout << "NO" << endl;
		return 0;
	}
	REP(i, 0, 4) {
		REP(j, 0, 4) {
			if (t[i][j] == '.') {
				if (win(i, j)) {
					cout << "YES" << endl;
					return 0;
				}
			}
		}
	}
	cout << "NO" << endl;
	return 0;
}

bool win(int i, int j) {
	//En medio
	if (i - 1 >= 0 && i + 1 < 4) {
		if (t[i - 1][j] == 'x' && t[i + 1][j] == 'x')
			return true;
	}
	if (j - 1 >= 0 && j + 1 < 4) {
		if (t[i][j - 1] == 'x' && t[i][j + 1] == 'x')
			return true;
	}
	if ((i - 1 >= 0 && j - 1 >= 0) && (i + 1 < 4 && j + 1 < 4)) {
		if (t[i - 1][j - 1] == 'x' && t[i + 1][j + 1] == 'x')
			return true;
	}
	if ((i - 1 >= 0 && j + 1 >= 0) && (i + 1 < 4 && j - 1 < 4)) {
		if ((t[i - 1][j + 1] == 'x') && t[i + 1][j - 1] == 'x')
			return true;
	}
	//Izquierda
	if (j - 2 >= 0) {
		if (t[i][j - 1] == 'x' && t[i][j - 2] == 'x')
			return true;
	}
	//Diag. izq. inf.
	if (j - 2 >= 0 && i + 2 < 4) {
		if (t[i + 1][j - 1] == 'x' && t[i + 2][j - 2] == 'x')
			return true;
	}
	//Abajo
	if (i + 2 < 4) {
		if (t[i + 1][j] == 'x' && t[i + 2][j] == 'x')
			return true;
	}
	//Diag. der. inf.
	if (i + 2 < 4 && j + 2 < 4) {
		if (t[i + 1][j + 1] == 'x' && t[i + 2][j + 2] == 'x')
			return true;
	}
	//Derecha
	if (j + 2 < 4) {
		if (t[i][j + 1] == 'x' && t[i][j + 2] == 'x')
			return true;
	}
	//Diag. der. sup.
	if (j + 2 < 4 && i - 2 >= 0) {
		if (t[i - 1][j + 1] == 'x' && t[i - 2][j + 2] == 'x')
			return true;
	}
	//Arriba
	if (i - 2 >= 0) {
		if (t[i - 1][j] == 'x' && t[i - 2][j] == 'x')
			return true;
	}
	//Diag. izq. sup
	if (i - 2 >= 0 && j - 2 >= 0) {
		if (t[i - 1][j - 1] == 'x' && t[i - 2][j - 2] == 'x')
			return true;
	}
	return false;
}
