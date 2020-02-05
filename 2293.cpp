#include <iostream>
using namespace std;
int DP[10001];
int object[101];

int main() {
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) 
		cin >> object[i];
	DP[0] = 1;
	for (int i = 1; i <= n; i++)
		for (int j = object[i]; j <= k; j++)
			DP[j] += DP[j - object[i]];
	cout << DP[k];
	return 0;
}
