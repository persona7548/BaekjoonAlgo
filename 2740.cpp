#include <iostream>
using namespace std;

int main() {
	int matrixA[101][101], matrixB[101][101];
	int n, m, k, sum;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> matrixA[i][j];
	cin >> m >> k;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < k; j++)
			cin >> matrixB[i][j];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			sum = 0;
			for (int l = 0; l < m; l++)
				sum += matrixA[i][l] * matrixB[l][j];
			cout << sum << " ";
		}
		cout << "\n";
	}
	return 0;
}
