/* https://codeforces.com/contest/764/problem/A */
#include <bits/stdc++.h>
using namespace std;

int gcd(int, int);

int main() {
	int n, m, q;
    cin >> n >> m >> q;
    int lcm = n * m / gcd(n, m);
    cout << q / lcm << endl;
	return 0;
}

int gcd(int a, int b) {
    while (b != 0) {
        int aux = a;
        a = b;
        b = aux % a;
    }
    return a;
}
