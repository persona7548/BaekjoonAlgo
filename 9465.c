#include<stdio.h>
long DP[5][100001], point[3][100001],answer[100001];

int max(int x, int y) {
	return (x > y) ? x : y;
}

int main(void) {

	int i, n, MAX1=0, j,k,MAX2;
	scanf("%d",&k);
	for (int m = 0; m < k; m++) {
		scanf("%d", &n);
		for (i = 1; i <= 2; i++) {
			for (j = 1; j <= n; j++) {
				scanf("%d", &point[i][j]);
			}
		}
		DP[1][1] = point[1][1];
		DP[2][1] = point[2][1];
		for (i = 2; i <n+1 ; i++) {
			DP[1][i] = max(DP[4][i - 1], DP[2][i - 1]) + point[1][i];
			DP[2][i] = max(DP[3][i-1],DP[1][i - 1]) + point[2][i];
			DP[3][i] = max(max(max(DP[1][i - 2], DP[2][i - 2]),DP[3][i-2]),DP[4][i-2]) + point[1][i];
			DP[4][i] = max(max(max(DP[1][i - 2], DP[2][i - 2]), DP[3][i - 2]),DP[4][i - 2]) +point[2][i];
		}
		MAX1 = max(DP[1][n], DP[2][n]);
		MAX2 = max(DP[3][n], DP[4][n]);
		answer[m] = max(MAX1, MAX2);
	}
	for (int m = 0; m < k; m++)
		printf("%d\n", answer[m]);
	return 0;
}
