#include <iostream>

using namespace std;
int DP[125252];
int main() {
	int n;

	cin >>n;
	int k = 0;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= i; j++) {
			cin >> DP[++k];
		}
	for (int i = n-1; i >=1; i--){
		int startP = (i*(i - 1)) / 2 + 1;
		for (int j = 0; j < i; j++) {

			DP[startP + j] += DP[startP + j + i] > DP[startP + j + i + 1] ? DP[startP + j + i] : DP[startP + j + i + 1];
		}
	}
	cout << DP[1];

	return 0;
}
