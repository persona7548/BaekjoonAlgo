#include <stdio.h>
int main(void) {
	int n,countA,countB,countC,max,MAX;
	scanf("%d", &n);
	int arr[10001];
	
	for(int i = 1;i<n+1;i++)
		scanf("%d", &arr[i]);

	int DP[10001] = {0};

	DP[1] = arr[1];
	DP[2] = arr[1] + arr[2];
	MAX = DP[2];
	for (int i = 3; i < n+1; i++)
	{
		countA = DP[i - 1]; 
		countB = DP[i - 2]+arr[i];
		countC = DP[i - 3]+arr[i-1]+arr[i];

		max = (countA > countB) ? countA : countB;
		DP[i] = (max > countC) ? max : countC;

		MAX  =  (MAX > DP[i]) ? MAX : DP[i];
	}
	printf("%d", MAX);
	return 0;
}
