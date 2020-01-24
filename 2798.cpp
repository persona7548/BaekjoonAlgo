#include <iostream>
using namespace std;
int card[100001];
int main() {
	int n, m, max = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> card[i];
	for (int i = 0; i < n - 2; i++)
		for (int j = i+1; j < n - 1; j++)
			for (int k = j+1; k < n; k++)
				max < (card[i] + card[j] + card[k]) && m>= (card[i] + card[j] + card[k]) ? max = card[i] + card[j] + card[k] : max;
	cout << max;
	return 0;
}
