#include <stdio.h>

int point[4][1001],DP[4][1001];

int min(int x, int y){return (x > y) ? y : x;}
int main() {

	int n,i,j,m;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= 3; j++) {
			scanf("%d", &point[j][i]);
		}
	}
	for (i = 1; i <= n; i++)
	{
		DP[1][i] = min(DP[2][i - 1], DP[3][i - 1]) + point[1][i];
		DP[2][i] = min(DP[1][i - 1], DP[3][i - 1]) + point[2][i];
		DP[3][i] = min(DP[1][i - 1], DP[2][i - 1]) + point[3][i];
	}
	m = min(DP[1][n],DP[2][n]);
	printf("%d", min(m, DP[3][n]));
	return 0;
}
