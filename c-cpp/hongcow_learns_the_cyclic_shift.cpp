/* https://codeforces.com/contest/745/problem/A */
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
using namespace std;

int main () {
	vector<char> v;
	string s;
	cin >> s;
	
	for (int i = 0; i < s.size(); i++)
		v.push_back(s[i]);

	int count = 1;
	vector<char>::iterator it;
	vector<char>::iterator start = find(v.begin(), v.end(), v[0]);
	set< vector<char> > l;
	for (int j = 0; j < v.size(); j++) {
		it = --v.end();
		v.insert((v.begin()), *it);
		v.erase(--v.end());
		l.insert(v);
	}

	cout << l.size() << endl;
	return 0;
}
