#include <iostream>
#include <algorithm>
using namespace std;
int DP[101][100001];
int object[101][2];

int main() {
	int n, k, w, v;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> w >> v;
		object[i][0] = w;
		object[i][1] = v;
	}
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= k; j++) {
			if (j >= object[i][0])
				DP[i][j] = max(DP[i - 1][j - object[i][0]] + object[i][1], DP[i - 1][j]);
			else
				DP[i][j] = DP[i - 1][j];
		}
	cout << DP[n][k];
	return 0;
}
