#include <stdio.h>
int arr[301], DP[301];
int main(void) {
	int n, countA, countB;

	scanf("%d", &n);

	for (int i = 1; i<n + 1; i++)
		scanf("%d", &arr[i]);

	for (int i = 1; i <= n; i++)
	{
		countA = DP[i - 2]+ arr[i];
		countB = DP[i - 3] + arr[i-1]+ arr[i];
		

		DP[i] = (countA > countB) ? countA : countB;;
	}

	printf("%d", DP[n]);

	return 0;
}
