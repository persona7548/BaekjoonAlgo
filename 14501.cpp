#include <iostream>
#include <algorithm>
using namespace std;
int plan[17][2], DP[17];
int main() {
	int n, result=0;

	cin >> n;

	for (int i = 1; i <= n; i++) 
		cin >> plan[i][0] >> plan[i][1];
	
	for (int i = 1; i <= n; i++) {
		if (i + plan[i][0] <= n + 1) {
			DP[i + plan[i][0]] = max(DP[i + plan[i][0]],DP[i]+plan[i][1]);
			result = max(result, DP[i + plan[i][0]]);
		}
			DP[i + 1] = max(DP[i + 1], DP[i]);
			result = max(result, DP[i + 1]);
		
	}

	cout << result;
	return 0;
}
