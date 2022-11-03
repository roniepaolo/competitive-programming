/* https://codeforces.com/contest/363/problem/B */
#include <iostream>
#include <cstdio>
#define M 150005
using namespace std;

int min_sum[M], heights[M];

int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	int sum = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &heights[i]);
		if (i < k)
			sum += heights[i];
	}

	int ans = 0;
	int pred_sum = sum;
	min_sum[0] = sum;
	for (int i = 1; i <= n - k; i++) {
		int next_sum;
		next_sum = pred_sum + heights[k-1+i] - heights[i-1];
		//cout << next_sum << " = " << pred_sum << " + " << heights[k-1+i] << " - " << heights[i-1] << endl;
		if (next_sum < min_sum[i-1]) {
			ans = i;
			min_sum[i] = next_sum;
		}
		else {
			min_sum[i] = min_sum[i-1];
		}
		pred_sum = next_sum;
	}
/*
	//IMPRIMIR
	for (int i = 0; i <= n-k; i++) {
		printf("%d ", min_sum[i]);
	}
	printf("\n");
*/

	printf("%d\n", ans + 1);

	return 0;
}
