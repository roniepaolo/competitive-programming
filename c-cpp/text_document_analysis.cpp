/* https://codeforces.com/contest/723/problem/B */
#include <iostream>
#include <string.h>
using namespace std;

#define M 255

char underscore[M][M];
char parentheses[M][M];

int main() {
	int n, flag = -1, i = 0, j = 0, k = 0, l = 0;
	char c;
	cin >> n;
	while (n--) {
		cin >> c;
		// Para el comienzo
		if (flag == -1 && (c != '_' && c != '('))
			flag = 1;
		if (c == '(' && flag == -1) {
			flag = 0;
			continue;
		}
		if (c == '_' && flag == -1) {
			flag = 1;
			continue;
		}
		//Para cuando lea el guion abajo
		if ((c == '_') && flag == 1) {
			j = 0;
			i++;
			continue;
		}
		if (c == '_' && flag == 0) {
			l = 0;
			k++;
			continue;
		}
		//Para cuando lea los parentesis
		if (c == '(' && flag == 1) {
			j = 0;
			i++;
			flag = 0;
			continue;
		}
		if (c == ')' && flag == 0) {
			l = 0;
			k++;
			flag = 1;
			continue;
		}

		if (flag == 1) {
			underscore[i][j] = c;
			j++;
		}
		else
			if (flag == 0) {
				parentheses[k][l] = c;
				l++;
			}
	}
	
	int a, max = 0, count = 0;
	for (a = 0; a <= i; a++)
		if ((int)strlen(underscore[a]) >= max)
			max = strlen(underscore[a]);
	for (a = 0; a <= k; a++)
		if ((int)strlen(parentheses[a]) > 0)
			count++;
	cout << max << " " << count << endl;

	return 0;
}
