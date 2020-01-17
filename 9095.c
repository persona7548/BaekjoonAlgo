#include<stdio.h>

int main(void) {

	int i,s[10],DP[10],k;
	DP[1] = 1;
	DP[2] = 2;
	DP[3] = 4;

	for (int i = 4; i < 11; i++) {
		DP[i] = DP[i - 1] + DP[i - 2] + DP[i - 3];
	}
	scanf("%d", &i);
	for(int j=0;j<i;j++)
	{
		scanf("%d", &k);
		s[j] = DP[k];
	}
	for (int j = 0; j<i; j++)
		printf("%d\n", s[j]);
	


	return 0;
}
