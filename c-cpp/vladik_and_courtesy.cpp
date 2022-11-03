/* https://codeforces.com/contest/811/problem/A */
#include <iostream>
using namespace std;

int main() {
	int n, m;
    cin >> n >> m;
    
    int k = 1;
    int mask = 1;
    while (n >= 0 && m >= 0) {
        if (k & mask) n -= k;
        else m -= k;
        k++;
    }
    if (n < 0) cout << "Vladik" << endl;
    else cout << "Valera" << endl;
	return 0;
}
