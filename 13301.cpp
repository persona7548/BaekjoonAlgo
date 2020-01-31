#include <iostream>
#include <vector>
using namespace std;
long long DP[81], DPanswer[81];

int main() {
	int N;
	cin >> N;
	DP[1] = 1;
	DP[2] = 1;
	for (int i = 3; i <= N; i++)
		DP[i] = DP[i - 1] + DP[i - 2];
	DPanswer[1] = 4;
	for (int i = 2; i <= N; i++)
		DPanswer[i] = (DP[i] * 2 + DPanswer[i - 1]);

	cout << DPanswer[N];

	return 0;
}
