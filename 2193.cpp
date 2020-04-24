#include <iostream>

using namespace std; 
long long DP[91];

int main() {
	int N;
	cin >> N;
	DP[1] = 1;
	for (int i = 2; i <= N; i++) {
		DP[i] = DP[i - 1] + DP[i - 2];
	}
	cout << DP[N];
	return 0;
}
