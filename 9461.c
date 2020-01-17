#include<stdio.h>
unsigned long DP[100000];
unsigned long answer[101];
int main(void) {
	int T,k;
	scanf("%d",&T);
	DP[1] = 1;
	DP[2] = 1;
	DP[3] = 1;
	for (int i = 4; i < 100001; i++)
		DP[i] = DP[i - 2] + DP[i - 3];
	for (int i = 0; i < T; i++) {
		scanf("%d", &k);
		answer[i] = DP[k];
	}
	for (int i = 0; i < T; i++)
		printf("%lu\n",answer[i]);
}
