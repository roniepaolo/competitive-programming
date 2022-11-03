/* https://codeforces.com/contest/459/problem/B */
#include <iostream>
#include <map>
using namespace std;

int main() {
	int n;
	long long k, max = -1;
	map<long long, long long> flower;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k;
		if (k > max) max = k;
		flower[k]++;
	}
	map<long long, long long>::iterator itMin = flower.begin();
	map<long long, long long>::iterator itMax = flower.find(max);
	if (itMin->first == itMax->first) {
		long long array[itMin->second];
		array[0] = 1;
		for (long long i = 1; i <= itMin->second-2; i++) {
			array[i] = array[i-1] + i+1;
		}
		cout << itMax->first - itMin->first << " " << array[itMin->second - 2] << endl;
	}
	else
		cout << itMax->first - itMin->first << " " << itMin->second*itMax->second << endl;
	return 0;
}
