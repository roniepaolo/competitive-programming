/* https://codeforces.com/contest/382/problem/C */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findProgression(vector<int> &cards, int &pMin, int &pMax, int &startMax, int &endMax);
int itsokay(vector<int> cards);
void printVector(vector<int> rpta);

int main() {
	int n, k, count = 0;
	vector<int> cards;
	vector<int> rpta;
	cin >> n;
	while (n--) {
		cin >> k;
		cards.push_back(k);
	}

	if (cards.size() == 1) {
		cout << -1 << endl;
		return 0;
	}

	sort(cards.begin(), cards.end());
	int pMin = 100000000, pMax = -100000000, startMax, endMax;
	findProgression(cards, pMin, pMax, startMax, endMax);
	
	if (startMax == endMax) {
		cout << 1 << endl << cards[0] << endl;
		return 0;
	}

	//Intentamos meterlo al principio
	int posCard = cards[0] - pMin;
	cards.insert(cards.begin(), posCard);
	if (itsokay(cards)) {
		rpta.push_back(posCard);
		count++;
	}
	cards.erase(cards.begin());

	//Intentamos meterlo al final
	posCard = cards[cards.size()-1] + pMin;
	cards.insert(cards.end(), posCard);
	if (itsokay(cards)) {
		rpta.push_back(posCard);
		count++;
	}
	cards.erase(--cards.end());

	//Intentamos meter una carta al medio
	int i, j, g;
	if (pMax > 1) {
		if (pMax % 2 == 0) {
			posCard = (startMax + endMax) / 2;
			cards.insert(find(cards.begin(), cards.end(), endMax), posCard);
			if (itsokay(cards)) {
				rpta.push_back(posCard);
				count++;
			}
		} 
		/*for (i = 1; i < pMax; i++) {
			for (j = startMax+1; j < endMax; j += i) {
				cards.insert(find(cards.begin(), cards.end(), endMax), j);
				g = itsokay(cards);
				if (g) {
					rpta.push_back(j);
					count++;
					break;
				}
				cards.erase(find(cards.begin(), cards.end(), j));
			}
			if (g) {
				cards.erase(find(cards.begin(), cards.end(), j));
				break;
			}
		}*/
	}
	//Imprimimos los resultados
	if (count > 0) {
		cout << count << endl;
		sort(rpta.begin(), rpta.end());
		printVector(rpta);
	}
	else
		cout << 0 << endl;
	return 0;
}

void findProgression(vector<int> &cards, int &pMin, int &pMax, int &startMax, int &endMax) {
	for (int i = 1; i < cards.size(); i++) {
		if (cards[i] - cards[i-1] < pMin) pMin = cards[i] - cards[i-1];
		if (cards[i] - cards[i-1] > pMax) {
			pMax = cards[i] - cards[i-1];
			startMax = cards[i-1];
			endMax = cards[i];
		}
	}
}

int itsokay(vector<int> cards) {
	if (cards.size() == 2) return 1;
	int c = cards[1] - cards[0];
	for (int i = 2; i < cards.size(); i++) {
		if (cards[i] - cards[i-1] != c) return 0;
	}
	return 1;
}

void printVector(vector<int> rpta) {
	for (int i = 0; i < rpta.size(); i++)
		cout << rpta[i] << " ";
	cout << endl;
}
