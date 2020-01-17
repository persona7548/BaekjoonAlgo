#include<stdio.h>
unsigned long DP[100];
int main(void) {
	int k;
	DP[1] = 1;
	for (int i = 2; i < 100; i++) {
		DP[i] = DP[i - 1] + DP[i - 2];
	}
	scanf("%d", &k);
	printf("%lu", DP[k]);
	return 0;
}
