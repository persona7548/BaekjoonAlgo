#include <stdio.h>

int main(void) {
	int countA, countB, countC, max = 0;
	int N;
	int DP[1000001];
	scanf("%d", &N);

	DP[1] = 0;

	for (int i = 2; i < N + 1; i++)
	{
		countA = 10000, countB = 10000, countC = 10000;
		if (i % 3 == 0)
			countA = DP[i / 3] + 1;
		if (i % 2 == 0)
			countB = DP[i / 2] + 1;
		countC = DP[i - 1] + 1;

		max = (countA > countB) ? countB : countA;
		DP[i] = (max > countC) ? countC : max;
	}
	printf("%d", DP[N]);
	return 0;
}
