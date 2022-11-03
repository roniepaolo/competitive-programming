/* https://codeforces.com/contest/785/problem/A */
#include <iostream>
#include <map>

using namespace std;

map<string, int> m;

int main() {
	int n;
	cin >> n;
	//Init del map
	m["Tetrahedron"] = 4;
	m["Cube"] = 6;
	m["Octahedron"] = 8;
	m["Dodecahedron"] = 12;
	m["Icosahedron"] = 20;

	int ans = 0;
	while (n--) {
		string w;
		cin >> w;
		ans += m[w];
	}
	cout << ans << endl;

	return 0;
}
