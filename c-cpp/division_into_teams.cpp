/* https://codeforces.com/contest/149/problem/C */
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;
	vector< pair<int, int> > v;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int k;
		scanf("%d", &k);
		v.push_back(make_pair(k, i+1));
	}
	
	/*for (int i = 0; i < n; i++) {
		printf("%d %d\n", v[i].first, v[i].second);
	}*/

	sort(v.begin(), v.end());
	if (n % 2 != 0)
		printf("%d\n", (n + 1) / 2);
	else
		printf("%d\n", n / 2);
	for (int i = 0; i < n; i+=2)
		printf("%d ", v[i].second);
	printf("\n");

	if (n % 2 != 0)
		printf("%d\n", n - ((n + 1) / 2));
	else
		printf("%d\n", n - (n / 2));
	for (int i = 1; i < n; i+=2)
		printf("%d ", v[i].second);
	printf("\n");
	return 0;
}
